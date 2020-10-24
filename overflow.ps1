$overflowcontent=(("0f0f"*800)+"xx");
Write-Output "SharkOverflow" "Content of file bufferoverflow.cpp:"
Get-Content "bufferoverflow.cpp" | Write-Output
Write-Output "" 'Run the file "./bufferoverflow.exe" with the stdin (("0f0f"*800)+"xx") in a pipe' "Wait for COMPLETED! IF COMPLETED DOSN'T SHOW UP, PROGRAM IS DESTROYED BY OVERFLOW" "Note: In Sandboxie you can see the error SBIE2101 " "---" ""
Write-Output $overflowcontent | ./bufferoverflow.exe