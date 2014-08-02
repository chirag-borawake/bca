VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   7455
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   11880
   LinkTopic       =   "Form1"
   ScaleHeight     =   7455
   ScaleWidth      =   11880
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   2400
      TabIndex        =   14
      Text            =   " "
      Top             =   240
      Width           =   4095
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   2400
      TabIndex        =   13
      Text            =   " "
      Top             =   960
      Width           =   4215
   End
   Begin VB.Frame Frame1 
      Caption         =   " Color"
      Height          =   2175
      Left            =   1680
      TabIndex        =   8
      Top             =   1680
      Width           =   2175
      Begin VB.OptionButton Option1 
         Caption         =   " Red"
         Height          =   375
         Index           =   0
         Left            =   240
         TabIndex        =   12
         Top             =   360
         Width           =   1815
      End
      Begin VB.OptionButton Option1 
         Caption         =   " Green"
         Height          =   375
         Index           =   1
         Left            =   240
         TabIndex        =   11
         Top             =   720
         Width           =   1815
      End
      Begin VB.OptionButton Option1 
         Caption         =   " Blue"
         Height          =   375
         Index           =   2
         Left            =   240
         TabIndex        =   10
         Top             =   1200
         Width           =   1815
      End
      Begin VB.OptionButton Option1 
         Caption         =   " Black"
         Height          =   375
         Index           =   3
         Left            =   240
         TabIndex        =   9
         Top             =   1680
         Width           =   1575
      End
   End
   Begin VB.Frame Frame2 
      Caption         =   " Style"
      Height          =   2055
      Left            =   4080
      TabIndex        =   4
      Top             =   1800
      Width           =   2175
      Begin VB.CheckBox Check1 
         Caption         =   " Bold"
         Height          =   375
         Left            =   240
         TabIndex        =   7
         Top             =   360
         Width           =   1695
      End
      Begin VB.CheckBox Check2 
         Caption         =   " Italic"
         Height          =   495
         Left            =   240
         TabIndex        =   6
         Top             =   840
         Width           =   1695
      End
      Begin VB.CheckBox Check3 
         Caption         =   " Underline"
         Height          =   375
         Left            =   240
         TabIndex        =   5
         Top             =   1560
         Width           =   1335
      End
   End
   Begin VB.PictureBox Picture1 
      Height          =   1575
      Left            =   2040
      ScaleHeight     =   1515
      ScaleWidth      =   4035
      TabIndex        =   3
      Top             =   3960
      Width           =   4095
   End
   Begin VB.CommandButton cmdDisplay 
      Caption         =   " Display"
      Height          =   495
      Left            =   6480
      TabIndex        =   2
      Top             =   3840
      Width           =   1575
   End
   Begin VB.CommandButton Command2 
      Caption         =   " Clear"
      Height          =   495
      Left            =   6480
      TabIndex        =   1
      Top             =   4440
      Width           =   1575
   End
   Begin VB.CommandButton Command3 
      Caption         =   " Exit"
      Height          =   495
      Left            =   6480
      TabIndex        =   0
      Top             =   5040
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   " Your Name"
      Height          =   495
      Left            =   720
      TabIndex        =   17
      Top             =   240
      Width           =   1335
   End
   Begin VB.Label Label2 
      Caption         =   " Message"
      Height          =   375
      Left            =   720
      TabIndex        =   16
      Top             =   960
      Width           =   1335
   End
   Begin VB.Image Image1 
      Height          =   855
      Left            =   720
      Picture         =   "slip_21_Ima_Pic.frx":0000
      Stretch         =   -1  'True
      Top             =   4080
      Width           =   1095
   End
   Begin VB.Label Label3 
      Caption         =   " Click Me"
      Height          =   255
      Left            =   720
      TabIndex        =   15
      Top             =   5040
      Width           =   1095
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub cmdClear_Click()
Text1.Text = ""
Text2.Text = ""
Check1.Value = 0
Check2.Value = 0
Check3.Value = 0
For i = 0 To 3
Option1(i).Value = False
Next
Picture1.Picture = LoadPicture("")
End Sub
Private Sub cmdDisplay_Click()
 If Option1(0).Value Then
        Text1.ForeColor = vbRed
        Text2.ForeColor = vbRed
    ElseIf Option1(1).Value Then
        Text1.ForeColor = vbGreen
        Text2.ForeColor = vbGreen
    ElseIf Option1(2).Value Then
        Text1.ForeColor = vbBlue
        Text2.ForeColor = vbBlue
    Else
        Text1.ForeColor = vbBlack
        Text2.ForeColor = vbBlack
    End If
    If Check1.Value = 1 Then
        Text1.Font.Bold = True
        Text2.Font.Bold = True
    Else
        Text1.Font.Bold = False
        Text2.Font.Bold = False
    End If
    If Check2.Value = 1 Then
        Text1.Font.Italic = True
        Text2.Font.Italic = True
    Else
        Text1.Font.Italic = False
        Text2.Font.Italic = False
    End If
    If Check3.Value = 1 Then
        Text1.Font.Underline = True
        Text2.Font.Underline = True
    Else
        Text1.Font.Underline = False
        Text2.Font.Underline = False
    End If
End Sub



Private Sub Command3_Click()
End
End Sub

Private Sub Image1_Click()
Picture1.Picture = Image1.Picture
Picture1.ScaleMode = 3
Picture1.PaintPicture Picture1.Picture, 0, 0, Picture1.ScaleWidth, Picture1.ScaleHeight, 0, 0, Picture1.Picture.Width / 26.46, Picture1.Picture.Height / 26.46
End Sub

