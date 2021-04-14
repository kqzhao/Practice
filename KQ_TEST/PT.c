def load_excel(excel_path):

	global workbk
	global sheet_list
	
	workbk = openpyxl.load_workbook(excel_path)

	sheet_list = workbk.sheetnames

	#print(sheet_list)
