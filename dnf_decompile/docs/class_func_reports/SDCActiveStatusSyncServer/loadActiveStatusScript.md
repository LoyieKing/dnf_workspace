# loadActiveStatusScript

`_ZN25SDCActiveStatusSyncServer22loadActiveStatusScriptEv`

`SDCActiveStatusSyncServer::loadActiveStatusScript()`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncServer` | `0x0808e13c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808e13c  _ZN25SDCActiveStatusSyncServer22loadActiveStatusScriptEv
#           SDCActiveStatusSyncServer::loadActiveStatusScript()
# range [0x0808e13c, 0x0808e14f]
0808e13c +0x00:  push   %ebp
0808e13d +0x01:  mov    %esp,%ebp
0808e13f +0x03:  sub    $0x18,%esp
0808e142 +0x06:  movl   $"Etc/ActiveStatusTable_ex.etc",(%esp)
0808e149 +0x0d:  call   08906f88 <_Z23importActiveStatusTablePKc>  ; importActiveStatusTable(char const*)
0808e14e +0x12:  leave
0808e14f +0x13:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncServer::loadActiveStatusScript @ 0x808e13c

/* SDCActiveStatusSyncServer::loadActiveStatusScript() */

void SDCActiveStatusSyncServer::loadActiveStatusScript(void)

{
  importActiveStatusTable("Etc/ActiveStatusTable_ex.etc");
  return;
}
```
