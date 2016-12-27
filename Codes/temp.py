import matplotlib.pyplot as plt
import numpy as np
import scipy.misc
from scipy import ndimage
import PIL
from PIL import ImageFont
from PIL import Image
from PIL import ImageDraw 
import skimage

#im = ndimage.imread('abc.jpg')
im = Image.open('abc.jpg','r').convert()

skimage.util.random_noise(image, mode='salt', seed=None, clip=True, **kwargs)

#J = imnoise(im,'salt & pepper',0.02);
figure.imshow(J)