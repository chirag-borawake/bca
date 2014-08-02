VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2760
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3915
   LinkTopic       =   "Form1"
   ScaleHeight     =   2760
   ScaleWidth      =   3915
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text2 
      Height          =   285
      Left            =   2160
      TabIndex        =   6
      Text            =   " "
      Top             =   1560
      Width           =   975
   End
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2400
      TabIndex        =   5
      Top             =   2160
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   285
      Left            =   1680
      TabIndex        =   1
      Text            =   " "
      Top             =   840
      Width           =   975
   End
   Begin VB.CommandButton Calculate 
      Caption         =   "Calculate"
      Height          =   375
      Left            =   480
      TabIndex        =   0
      Top             =   2160
      Width           =   1455
   End
   Begin VB.Label Label3 
      Caption         =   "Addition of even digits"
      Height          =   255
      Left            =   360
      TabIndex        =   4
      Top             =   1560
      Width           =   1575
   End
   Begin VB.Label Label2 
      Caption         =   "Sum of even digits"
      Height          =   255
      Left            =   360
      TabIndex        =   3
      Top             =   360
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "Enter number"
      Height          =   255
      Left            =   360
      TabIndex        =   2
      Top             =   840
      Width           =   975
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim sum As Integer
Dim num As Integer
Dim digit As Integer
Private Sub Calculate_Click()
sum = 0
num = Trim(Text1.Text)
While (num > 0)
digit = num Mod 10
  If digit Mod 2 = 0 Then
    sum = sum + digit
  End If
num = num \ 10
Wend
Text2.Text = sum
End Sub

Private Sub Exit_Click()
End
End Sub
