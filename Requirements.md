# Requirements

1.0 WSUWord shall store a strings of text.
1.1 The stored string of text shall be of length zero or more characters. 
1.2 WSUWord shall provide a mechanism for users to append a single character to a stored string.
1.3 WSUWord shall provide a mechanism for users to insert a single chractter into a stored string at a user specified index within the stored string.
1.3.1 When a character is inserted into a stored string at an index, WSUWord shall retain all characters already in the stored string.
1.3.2 When a character is inserted into a stored string at an index, all characters already in the stored string at indexes greater than or equal to the insertion index shall have their index positions within the string increased by one.
1.4 WSUWord shall provide a mechanism for users to remove a the stored character at a user specified index within the stored string.
1.4.1 When a character at an index within a stored string is removed, WSUWord shall retain all other characters already in the stored string.
1.4.2 When a character at an index  within a stored string is removed, all characters already in the stored string at indexes greater than the removal index shall have their index positions within the string decreased by one.
1.5 WSUWord shall provide a mechanism for users to insert a string of one or more characters at a user specified index within the stored string.
1.5.1 When a string is inserted into a stored string at an index, WSUWord shall retain all characters already in the stored string.
1.5.2 When a string is inserted into a stored string at an index, all characters already in the stored string at indexes greater than or equal to the insertion index shall have their index positions within the string increased by the length in characters of the inserted string.
2.0 WSUWord shall provide a mechanism for users to undo the most recent modification performed upon the strored string.
2.1 After an undo operation, the modification if any that preceded the undo operation shall become the most recent modification for the purpose of subsequent undo operations.
2.2 WSUWord shall provide a mechanism for users to redo the most recent modification that was undone.
2.3 After a redo operation, the next most recent modification that was undone shall be coniderred the most recent modification that was undone for the purpose of subsequent redo operations.
2.4 After a redo operation, the redone modification shall become the most recent modification upon the string for the purpose of subsequent undo operations.
2.5 WSUWord shall provide a mechanism to group multiple modifications to the stored string.
2.5.1 Group of modifications shall be considered a single modification for the purposes of sebsequent undo.
2.5.2 Group of modifications that is undone shall be considered a single modification for the purposes of sebsequent redo.
2.5.3 Group of modifications that is redon shall be considerred a single modification for teh purposes of sebsequent undo.
3.0 WSUWord shall provide a mechanism to perform a sequence of modifications to the stored string.
3.1 A sequence of operations will be considerred a "script".
3.1 A "script" will consist of one or more strings that describe modifications to be performed to teh stored string.
4.0 WSUWord shall provide a mechanism to ouput the stored string in a human readable format.
