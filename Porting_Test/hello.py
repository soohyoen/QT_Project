import cv2

img = cv2.imread("C:/Users/va/Desktop/Qt/QT_Project/Porting_Test/img/img01.jpg")
#height, width = img.shape[:2]

cv2.imshow('img',img)
cv2.waitKey(0)
