VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3915
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4485
   LinkTopic       =   "Form1"
   ScaleHeight     =   3915
   ScaleWidth      =   4485
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   2400
      TabIndex        =   4
      Top             =   3120
      Width           =   1215
   End
   Begin VB.CommandButton Average 
      Caption         =   "Average"
      Height          =   495
      Left            =   480
      TabIndex        =   3
      Top             =   3120
      Width           =   1215
   End
   Begin VB.Label Label4 
      Caption         =   "Average"
      Height          =   255
      Left            =   480
      TabIndex        =   5
      Top             =   2400
      Width           =   1095
   End
   Begin VB.Label Label3 
      Caption         =   "Enter number 3"
      Height          =   255
      Left            =   480
      TabIndex        =   2
      Top             =   1800
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "Enter number 2"
      Height          =   255
      Left            =   480
      TabIndex        =   1
      Top             =   1080
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Enter number 1"
      Height          =   255
      Left            =   480
      TabIndex        =   0
      Top             =   480
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
 Dim Txt1, Txt2, Txt3, Txt4 As TextBox
Private Sub Command3_Click()
End
End Sub
Private Sub Exit_Click()
End
End Sub

Private Sub Form_Load()
Set Txt1 = Controls.Add("vb.textbox", "txt1")
Txt1.Top = 400
Txt1.Width = 2000
Txt1.Left = 2000
Txt1.Visible = True

Set Txt2 = Controls.Add("vb.textbox", "txt2")
Txt2.Top = 1100
Txt2.Width = 2000
Txt2.Left = 2000
Txt2.Visible = True

Set Txt3 = Controls.Add("vb.textbox", "txt3")
Txt3.Top = 1800
Txt3.Width = 2000
Txt3.Left = 2000
Txt3.Visible = True
End Sub
Private Sub Average_Click()
Set Txt4 = Controls.Add("vb.textbox", "txt4")
Txt4.Top = 2400
Txt4.Width = 2000
Txt4.Left = 2000
Txt4.Visible = True
Txt4 = (Val(Txt1) + Val(Txt2) + Val(Txt3)) / 3
End Sub
