# -*- coding: utf-8 -*-

import cv2

I1=cv2.imread("3096.jpg")  #gonuntu okuma islemi yapildi

           
print(I1.shape)            #goruntunun boyutları basilmistir
rows,cols =I1.shape[:2]    # satır ve sutun parametreleri alindi





#17. kod satirida satir ve sutun tam merkezden dönmesi için 2'ye bölündü.90 derece dondurme için parametre girildi.

rotation_matrix = cv2.getRotationMatrix2D((cols/2,rows/2),90,0.8)




I1_rotation=cv2.warpAffine(I1,rotation_matrix,(cols,rows))

cv2.imwrite("90_derece_donmus_hal.jpg",I1_rotation)  #kaydetme islemi yapildi
cv2.imshow("goruntu",I1)                   
cv2.imshow("I1_rotation",I1_rotation)











