VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   2700
   ClientLeft      =   225
   ClientTop       =   555
   ClientWidth     =   4125
   LinkTopic       =   "Form1"
   ScaleHeight     =   2700
   ScaleWidth      =   4125
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text3 
      Height          =   375
      Left            =   2520
      TabIndex        =   6
      Text            =   " "
      Top             =   1440
      Width           =   1215
   End
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   600
      TabIndex        =   5
      Top             =   2040
      Width           =   1215
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   2520
      TabIndex        =   3
      Text            =   " "
      Top             =   840
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2520
      TabIndex        =   2
      Text            =   " "
      Top             =   240
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Result"
      Height          =   255
      Left            =   600
      TabIndex        =   4
      Top             =   1440
      Width           =   735
   End
   Begin VB.Label Label2 
      Caption         =   "Enter second value"
      Height          =   255
      Left            =   600
      TabIndex        =   1
      Top             =   840
      Width           =   1455
   End
   Begin VB.Label Label1 
      Caption         =   "Enter first value"
      Height          =   255
      Left            =   600
      TabIndex        =   0
      Top             =   240
      Width           =   1215
   End
   Begin VB.Menu mnuOperations 
      Caption         =   "Operations"
      Visible         =   0   'False
      Begin VB.Menu smnuAddition 
         Caption         =   "Addition"
      End
      Begin VB.Menu smnuSubtraction 
         Caption         =   "Subtraction"
      End
      Begin VB.Menu smnuMultiplication 
         Caption         =   "Multiplication"
      End
      Begin VB.Menu smnuDivision 
         Caption         =   "Division"
      End
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Exit_Click()
End
End Sub

Private Sub Form_MouseDown(Button As Integer, Shift As Integer, X As Single, Y As Single)
Call PopupMenu(mnuOperations)
End Sub

Private Sub smnuAddition_Click()
Text3.Text = Val(Text1.Text) + Val(Text2.Text)
End Sub

Private Sub smnuDivision_Click()
Text3.Text = Val(Text1.Text) / Val(Text2.Text)
End Sub

Private Sub smnuMultiplication_Click()
Text3.Text = Val(Text1.Text) * Val(Text2.Text)
End Sub

Private Sub smnuSubtraction_Click()
Text3.Text = Val(Text1.Text) - Val(Text2.Text)
End Sub
