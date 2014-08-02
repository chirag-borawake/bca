VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5850
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4275
   LinkTopic       =   "Form1"
   ScaleHeight     =   5850
   ScaleWidth      =   4275
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox txtTotal 
      Height          =   495
      Left            =   2160
      TabIndex        =   16
      Text            =   " "
      Top             =   3480
      Width           =   1215
   End
   Begin VB.CommandButton cmdUpdate 
      Caption         =   "Update"
      Height          =   375
      Left            =   2880
      TabIndex        =   14
      Top             =   4440
      Width           =   975
   End
   Begin VB.CommandButton cmdExit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   3000
      TabIndex        =   8
      Top             =   5040
      Width           =   735
   End
   Begin VB.CommandButton cmdNext 
      Caption         =   "Next"
      Height          =   495
      Left            =   1800
      TabIndex        =   7
      Top             =   5040
      Width           =   735
   End
   Begin VB.CommandButton cmdPrev 
      Caption         =   "Previous"
      Height          =   495
      Left            =   360
      TabIndex        =   6
      Top             =   5040
      Width           =   975
   End
   Begin VB.CommandButton cmdSave 
      Caption         =   "Save"
      Height          =   495
      Left            =   1680
      TabIndex        =   5
      Top             =   4320
      Width           =   855
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "Add"
      Height          =   495
      Left            =   480
      TabIndex        =   4
      Top             =   4320
      Width           =   855
   End
   Begin VB.TextBox txtPrice 
      DataSource      =   "Adodc1"
      Height          =   375
      Left            =   2040
      TabIndex        =   3
      Top             =   2880
      Width           =   1575
   End
   Begin VB.TextBox txtQty 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2040
      TabIndex        =   2
      Top             =   2160
      Width           =   1575
   End
   Begin VB.TextBox txtPname 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2040
      TabIndex        =   1
      Top             =   1560
      Width           =   1575
   End
   Begin VB.TextBox txtPcode 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2040
      TabIndex        =   0
      Top             =   840
      Width           =   1575
   End
   Begin VB.Label Label6 
      Caption         =   "Total price"
      Height          =   255
      Left            =   480
      TabIndex        =   15
      Top             =   3600
      Width           =   1215
   End
   Begin VB.Label Label5 
      Caption         =   "Enter product details"
      Height          =   255
      Left            =   480
      TabIndex        =   13
      Top             =   360
      Width           =   1695
   End
   Begin VB.Label Label4 
      Caption         =   "Price"
      Height          =   255
      Left            =   480
      TabIndex        =   12
      Top             =   3000
      Width           =   855
   End
   Begin VB.Label Label3 
      Caption         =   "Enter quantity"
      Height          =   255
      Left            =   480
      TabIndex        =   11
      Top             =   2280
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "Enter name"
      Height          =   255
      Left            =   480
      TabIndex        =   10
      Top             =   1560
      Width           =   855
   End
   Begin VB.Label Label1 
      Caption         =   "Enter code"
      Height          =   255
      Left            =   480
      TabIndex        =   9
      Top             =   840
      Width           =   1095
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim C As New Connection
Dim R As New Recordset
Dim S As String
Dim tot As Integer
Private Sub cmdAdd_Click()
        txtPcode.Text = ""
        txtPname.Text = ""
        txtQty.Text = ""
        txtPrice.Text = ""
        txtTotal.Text = ""
      
        txtPcode.SetFocus
End Sub

Private Sub cmdExit_Click()
End
End Sub

Private Sub cmdNext_Click()
    R.MoveNext
    If Not R.EOF Then
        txtPcode.Text = R.Fields(0).Value
        txtPname.Text = R.Fields(1).Value
        txtQty.Text = R.Fields(2).Value
        txtPrice.Text = R.Fields(3).Value
        txtTotal.Text = R.Fields(4).Value
    Else
        MsgBox "No More Records!", vbInformation, "Product"
    End If
End Sub
Private Sub cmdPrev_Click()
    R.MovePrevious
    If Not R.BOF Then
        txtPcode.Text = R.Fields(0).Value
        txtPname.Text = R.Fields(1).Value
        txtQty.Text = R.Fields(2).Value
        txtPrice.Text = R.Fields(3).Value
        txtTotal.Text = R.Fields(4).Value
    Else
        MsgBox "No More Records!", vbInformation, "Product"
    End If
End Sub

Private Sub cmdSave_Click()
        R.Close
        S = "Insert Into ProductTable Values(" & Val(txtPcode.Text) & ",'" & txtPname.Text & "'," & Val(txtQty.Text) & ", " & Val(txtPrice.Text) & "," & Val(txtTotal.Text) & ")"
        R.Open S, C, adOpenDynamic, adLockOptimistic
        S = "Select * From ProductTable"
        R.Open S, C, adOpenDynamic, adLockOptimistic
        If Not R.BOF And Not R.EOF Then
            R.MoveFirst
            txtPcode.Text = R.Fields(0).Value
            txtPname.Text = R.Fields(1).Value
            txtQty.Text = R.Fields(2).Value
            txtPrice.Text = R.Fields(3).Value
            txtTotal.Text = R.Fields(4).Value
        End If
            MsgBox "Product Added Successfully!", vbInformation, "Product"
End Sub

Private Sub cmdUpdate_Click()
        R.Close
        If txtPcode.Text = 100 Then
            S = "Update ProductTable Set pcode = '" & txtPname.Text & "', pname = '" & txtPname.Text & "',quantity=" & Val(txtQty.Text) & ",price=" & Val(txtPrice.Text) & "',tprice=" & Val(txtTotal.Text) & " Where pcode = " & Val(txtPcode.Text)
            S = "Select * From ProductTable"
            R.Open S, C, adOpenDynamic, adLockOptimistic
                
            If Not R.BOF And Not R.EOF Then
                R.MoveFirst
                txtPcode.Text = R.Fields(0).Value
                txtPname.Text = R.Fields(1).Value
                txtQty.Text = R.Fields(2).Value
                txtPrice.Text = R.Fields(3).Value
                txtTotal.Text = R.Fields(4).Value
            End If
                MsgBox "Product Updated Successfully!", vbInformation, "Product"
        Else
            S = "Select * From ProductTable"
            R.Open S, C, adOpenDynamic, adLockOptimistic
                
            If Not R.BOF And Not R.EOF Then
                R.MoveFirst
                txtPcode.Text = R.Fields(0).Value
                txtPname.Text = R.Fields(1).Value
                txtQty.Text = R.Fields(2).Value
                txtPrice.Text = R.Fields(3).Value
                txtTotal.Text = R.Fields(4).Value
            End If
                MsgBox "Product Not updated!", vbInformation, "Product"
        End If
End Sub
Private Sub Form_Load()
    S = "Select * From ProductTable"
    C.Open "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Product.mdb;Persist Security Info=False"
    R.Open S, C, adOpenDynamic, adLockOptimistic
            
    If Not R.BOF And Not R.EOF Then
        R.MoveFirst
        txtPcode.Text = R.Fields(0).Value
        txtPname.Text = R.Fields(1).Value
        txtQty.Text = R.Fields(2).Value
        txtPrice.Text = R.Fields(3).Value
        txtTotal.Text = R.Fields(4).Value
    End If
End Sub

Private Sub txtPrice_Change()
txtTotal = Val(txtQty.Text) * Val(txtPrice.Text)
End Sub

