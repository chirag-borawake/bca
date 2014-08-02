VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3120
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   5325
   LinkTopic       =   "Form1"
   ScaleHeight     =   3120
   ScaleWidth      =   5325
   StartUpPosition =   3  'Windows Default
   Begin VB.ListBox List1 
      Height          =   1620
      Left            =   480
      TabIndex        =   1
      Top             =   840
      Width           =   1455
   End
   Begin VB.PictureBox Picture1 
      Height          =   1695
      Left            =   3240
      ScaleHeight     =   1635
      ScaleWidth      =   1275
      TabIndex        =   0
      Top             =   840
      Width           =   1335
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
List1.AddItem "Koala"
List1.AddItem "Penguins"
List1.AddItem "Desert"
End Sub

Private Sub List1_Click()
For i = 0 To List1.ListCount - 1
If List1.ListIndex = 0 Then
Picture1.Picture = LoadPicture("C:\Users\Public\Pictures\Sample Pictures\Koala.jpg")
Picture1.ScaleMode = 3
Picture1.PaintPicture Picture1.Picture, 0, 0, Picture1.ScaleWidth, Picture1.ScaleHeight, 0, 0, Picture1.Picture.Width / 26.46, Picture1.Picture.Height / 26.46

ElseIf List1.ListIndex = 1 Then
Picture1.Picture = LoadPicture("C:\Users\Public\Pictures\Sample Pictures\Penguins.jpg")
Picture1.ScaleMode = 3
Picture1.PaintPicture Picture1.Picture, 0, 0, Picture1.ScaleWidth, Picture1.ScaleHeight, 0, 0, Picture1.Picture.Width / 26.46, Picture1.Picture.Height / 26.46

Else
Picture1.Picture = LoadPicture("C:\Users\Public\Pictures\Sample Pictures\Desert.jpg")
Picture1.ScaleMode = 3
Picture1.PaintPicture Picture1.Picture, 0, 0, Picture1.ScaleWidth, Picture1.ScaleHeight, 0, 0, Picture1.Picture.Width / 26.46, Picture1.Picture.Height / 26.46

End If
Next i
End Sub
