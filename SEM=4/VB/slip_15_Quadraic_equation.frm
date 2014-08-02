VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4305
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3825
   LinkTopic       =   "Form1"
   ScaleHeight     =   4305
   ScaleWidth      =   3825
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   435
      Left            =   2160
      TabIndex        =   8
      Top             =   3600
      Width           =   1095
   End
   Begin VB.CommandButton Calculate 
      Caption         =   "Calculate"
      Height          =   495
      Left            =   480
      TabIndex        =   7
      Top             =   3600
      Width           =   1215
   End
   Begin VB.TextBox Text3 
      Height          =   405
      Left            =   2280
      TabIndex        =   4
      Text            =   " "
      Top             =   2040
      Width           =   1095
   End
   Begin VB.TextBox Text2 
      Height          =   375
      Left            =   2280
      TabIndex        =   3
      Text            =   " "
      Top             =   1440
      Width           =   1095
   End
   Begin VB.TextBox Text1 
      Height          =   405
      Left            =   2280
      TabIndex        =   2
      Text            =   " "
      Top             =   720
      Width           =   1095
   End
   Begin VB.Label Result2 
      Height          =   255
      Left            =   1800
      TabIndex        =   11
      Top             =   3120
      Width           =   1695
   End
   Begin VB.Label Label6 
      Caption         =   "Resul"
      Height          =   255
      Left            =   720
      TabIndex        =   10
      Top             =   2760
      Width           =   615
   End
   Begin VB.Label Result1 
      Caption         =   " "
      Height          =   255
      Left            =   1800
      TabIndex        =   9
      Top             =   2760
      Width           =   1695
   End
   Begin VB.Label Label4 
      Caption         =   "Enter value for c:"
      Height          =   255
      Left            =   600
      TabIndex        =   6
      Top             =   2160
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Enter value for b:"
      Height          =   255
      Left            =   600
      TabIndex        =   5
      Top             =   1440
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "Enter value for a:"
      Height          =   255
      Left            =   600
      TabIndex        =   1
      Top             =   720
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Program for finding roots of quadratic equation"
      Height          =   255
      Left            =   360
      TabIndex        =   0
      Top             =   240
      Width           =   3255
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim temp, root_1, root_2 As Integer
Dim a, b, c As Integer
Private Sub Calculate_Click()
a = Text1.Text
b = Text2.Text
c = Text3.Text
temp = b * b - (4 * a * c)
If temp < 0 Then
   Result1 = "Roots are Imaginary"
Else
   root_1 = (-b + Sqr(temp)) / 2 * a
   root_2 = (-b - Sqr(temp)) / 2 * a
   Result1.Caption = "First root: " & root_1
   Result2.Caption = "Second root: " & root_2
End If
End Sub

Private Sub Exit_Click()
End
End Sub
