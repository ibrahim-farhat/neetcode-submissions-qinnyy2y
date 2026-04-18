class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        # brute force:
        # columns = list(list())
        
        # for i in range(9):
        #     columns.append(list())
        #     for j in range(9):
        #         if board[j][i] == ".":
        #             continue
        #         columns[i].append(board[j][i])
        
        # rows = list(list())
        
        # for i in range(9):
        #     rows.append(list())
        #     for j in range(9):
        #         if board[i][j] == ".":
        #             continue
        #         rows[i].append(board[i][j])

        # squares = list(list())
        # for i in range(9):
        #     squares.append([])
            
        # for i in range(9):
        #     index = 0

        #     for j in range(9):
        #         if board[i][j] == ".":
        #             continue
        #         squares[int(int(j/3)*3)+int(i/3)].append(board[i][j])

        # for i in range(9):
        #     if len(squares[i]) != len(set(squares[i])):
        #         return False
        #     if len(rows[i]) != len(set(rows[i])):
        #         return False
        #     if len(columns[i]) != len(set(columns[i])):
        #         return False
            
        # return True

        from collections import defaultdict

        rows = defaultdict(set)
        columns = defaultdict(set)
        squares = defaultdict(set)

        for i in range(9):
            for j in range(9):
                
                value = board[i][j]

                if value == ".":
                    continue

                sq_index = (i//3, j//3)

                if value in rows[i] or value in columns[j] or value in squares[sq_index]:
                    return False
                
                rows[i].add(value)
                columns[j].add(value)
                squares[sq_index].add(value)

        return True