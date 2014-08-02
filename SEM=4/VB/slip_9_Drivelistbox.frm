VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5955
   ClientLeft      =   225
   ClientTop       =   855
   ClientWidth     =   8955
   LinkTopic       =   "Form1"
   ScaleHeight     =   5955
   ScaleWidth      =   8955
   StartUpPosition =   3  'Windows Default
   Begin VB.PictureBox Picture1 
      Height          =   2655
      Left            =   3240
      ScaleHeight     =   2595
      ScaleWidth      =   2355
      TabIndex        =   4
      Top             =   360
      Width           =   2415
   End
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   615
      Left            =   3840
      TabIndex        =   3
      Top             =   3840
      Width           =   1575
   End
   Begin VB.DirListBox Dir1 
      Height          =   2115
      Left            =   360
      TabIndex        =   2
      Top             =   840
      Width           =   2535
   End
   Begin VB.FileListBox File1 
      Height          =   1455
      Left            =   360
      TabIndex        =   1
      Top             =   3360
      Width           =   2655
   End
   Begin VB.DriveListBox Drive1 
      Height          =   315
      Left            =   360
      TabIndex        =   0
      Top             =   240
      Width           =   2535
   End
   Begin VB.Menu mnuPopup 
      Caption         =   "Popup"
      Begin VB.Menu smnuAll_document 
         Caption         =   "All document"
      End
      Begin VB.Menu smnuAll_bitmaps 
         Caption         =   "All bitmaps"
      End
      Begin VB.Menu smnuAll_fils 
         Caption         =   "All files"
      End
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Private Sub Dir1_Change()
File1.Path = Dir1.Path
File1.Pattern = (".*bmp.*.doc;*.*")
End Sub

Private Sub Drive1_Change()
Dir1.Path = Drive1.Drive
End Sub

Private Sub Exit_Click()
End
End Sub

Private Sub File1_Click()
f = File1.Path
If Right(f, 1) <> "\" Then
Picture1.Picture = LoadPicture(f + "\" + File1.FileName)
Picture1.ScaleMode = 3
Picture1.PaintPicture Picture1.Picture, 0, 0, Picture1.ScaleWidth, Picture1.ScaleHeight, 0, 0, Picture1.Picture.Width / 26.46, Picture1.Picture.Height / 26.46
End If
End Sub

Private Sub Form_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)
If Button = vbRightButton Then
Call Me.PopupMenu(mnuPopup)
End If
End Sub

Private Sub smnuAll_document_Click()
File1.Pattern = ("*.*")
End Sub


