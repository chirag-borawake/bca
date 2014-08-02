VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Armstrong number"
   ClientHeight    =   2685
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4215
   LinkTopic       =   "Form1"
   ScaleHeight     =   2685
   ScaleWidth      =   4215
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2280
      TabIndex        =   5
      Top             =   2040
      Width           =   975
   End
   Begin VB.CommandButton Search 
      Caption         =   "Search"
      Height          =   375
      Left            =   840
      TabIndex        =   3
      Top             =   2040
      Width           =   975
   End
   Begin VB.TextBox Text1 
      Height          =   375
      Left            =   2880
      TabIndex        =   2
      Text            =   " "
      Top             =   1320
      Width           =   975
   End
   Begin VB.CommandButton Insert_array 
      Caption         =   "Insert array"
      Height          =   375
      Left            =   2160
      TabIndex        =   0
      Top             =   720
      Width           =   1335
   End
   Begin VB.Label Label3 
      Caption         =   "Program for armstrong number"
      Height          =   255
      Left            =   840
      TabIndex        =   6
      Top             =   240
      Width           =   2175
   End
   Begin VB.Label Label2 
      Caption         =   "First insert array element"
      Height          =   255
      Left            =   240
      TabIndex        =   4
      Top             =   840
      Width           =   1815
   End
   Begin VB.Label Label1 
      Caption         =   "Enter armstrong number to search"
      Height          =   255
      Left            =   240
      TabIndex        =   1
      Top             =   1440
      Width           =   2415
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim n, num(10), searchNumber As Integer
Dim i, r, number, sum, temp As Integer
Dim flag As Boolean

Private Sub Exit_Click()
End
End Sub

Private Sub Insert_array_Click()
n = InputBox("Enterhow many element in array:")
For i = 1 To n
    num(i) = InputBox("Enter elements:" & i)
Next i
End Sub

Private Sub Search_Click()
number = Text1.Text
For i = 1 To n
flag = False
If Trim(number) = Trim(num(i)) Then
flag = True
Exit For
End If
Next i
If flag = True Then
MsgBox "Number is present in array"
Else
MsgBox "Number is not present in array"
End If
End Sub
