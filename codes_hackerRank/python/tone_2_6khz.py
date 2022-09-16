#https://www.youtube.com/watch?v=lbV2SoeAggU

import numpy as np
from scipy.io.wavfile import write
#sample per second
sample_rate = 6000
#time axis x
duration_s = 4.0

time = np.arange(duration_s*sample_rate)

#generating our sine 
frequency = 2600
amplitude = 1

sinewave = amplitude*np.sin(2*np.pi*time*frequency/sample_rate)
#print(sinewave)

waveform = sinewave*0.3
waveform_interger=np.int16(waveform*32767)
#print(type(waveform_integers))
write('tone2_6k.wav', sample_rate, waveform_interger)
