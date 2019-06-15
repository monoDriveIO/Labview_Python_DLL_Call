import cv2
import numpy as np
from matplotlib import pyplot as plt


def static_vars(**kwargs):
    def decorate(func):
        for k in kwargs:
            setattr(func, k, kwargs[k])
        return func
    return decorate


@static_vars(counter=0, image=np.zeros(shape=(5,2)))
def get_image():
    get_image.counter += 1
    if get_image.counter == 1:
        get_image.image = cv2.imread('D:/GM/tools/KITTI_Tutorial/kitti_data/image_01/data/0000000000.png', cv2.IMREAD_GRAYSCALE)
    return get_image.image


def multiply(in1, in2):
    img = get_image()
    sum = np.sum(img[1:100])
    return sum

def GetSphereSAandVol(radius):
    #Calculate the surface area and volume of a sphere with given radius
    # sa = GetSA(radius)
    if radius < 0:
        return False #return false (0) if radius is negative
    vol = GetVol(radius)
    return vol

def GetSA(radius):
    M_PI = 3.14159
    return 4 * M_PI * radius * radius


def GetVol(radius):
    M_PI = 3.14159
    return 4.0 / 3.0 * M_PI * pow(radius, 3.0)

if __name__ == '__main__':
    print(multiply(1,2))
    print(GetSphereSAandVol(10))