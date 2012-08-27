#ifndef LinkSprite_h
#define LinkSprite_h


#include <SD.h>


/* Camera Jpeg LinkSprite */

void CamStart();
void SaveToFile(File f);
void ShutDownCmd();

File OpenNewFile();
File OpenLastFile();

void SendResetCmd();
void ReadImageSizeCmd();
void SetImageSizeCmd();
void SetBaudRateCmd();
void SendReadDataCmd();
void SendTakePhotoCmd();
void StopTakePhotoCmd();


#endif
