# SendBuffertoClientLog

`_ZN15cUserHistoryLog21SendBuffertoClientLogEishb`

`cUserHistoryLog::SendBuffertoClientLog(int, short, unsigned char, bool)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686e3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686e3a  _ZN15cUserHistoryLog21SendBuffertoClientLogEishb
#           cUserHistoryLog::SendBuffertoClientLog(int, short, unsigned char, bool)
# range [0x08686e3a, 0x08686e9f]
08686e3a +0x00:  push   %ebp
08686e3b +0x01:  mov    %esp,%ebp
08686e3d +0x03:  push   %esi
08686e3e +0x04:  push   %ebx
08686e3f +0x05:  sub    $0x30,%esp
08686e42 +0x08:  mov    0x10(%ebp),%ecx
08686e45 +0x0b:  mov    0x14(%ebp),%edx
08686e48 +0x0e:  mov    0x18(%ebp),%eax
08686e4b +0x11:  mov    %cx,-0xc(%ebp)
08686e4f +0x15:  mov    %dl,-0x10(%ebp)
08686e52 +0x18:  mov    %al,-0x14(%ebp)
08686e55 +0x1b:  movzbl -0x14(%ebp),%esi
08686e59 +0x1f:  movzbl -0x10(%ebp),%ebx
08686e5d +0x23:  movswl -0xc(%ebp),%ecx
08686e61 +0x27:  cmpl   $0x0,0xc(%ebp)
08686e65 +0x2b:  jne    08686e6e <+0x34>
08686e67 +0x2d:  mov    $"ANTIBOT",%eax
08686e6c +0x32:  jmp    08686e73 <+0x39>
08686e6e +0x34:  mov    $"DPROTO",%eax
08686e73 +0x39:  mov    0x8(%ebp),%edx
08686e76 +0x3c:  mov    (%edx),%edx
08686e78 +0x3e:  mov    %esi,0x14(%esp)
08686e7c +0x42:  mov    %ebx,0x10(%esp)
08686e80 +0x46:  mov    %ecx,0xc(%esp)
08686e84 +0x4a:  mov    %eax,0x8(%esp)
08686e88 +0x4e:  movl   $"SendBuffertoClient [%s],%d,%d,%d",0x4(%esp)
08686e90 +0x56:  mov    %edx,(%esp)
08686e93 +0x59:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686e98 +0x5e:  add    $0x30,%esp
08686e9b +0x61:  pop    %ebx
08686e9c +0x62:  pop    %esi
08686e9d +0x63:  pop    %ebp
08686e9e +0x64:  ret
08686e9f +0x65:  nop
```

## 反编译 C

```c
// cUserHistoryLog::SendBuffertoClientLog @ 0x8686e3a

/* cUserHistoryLog::SendBuffertoClientLog(int, short, unsigned char, bool) */

void __thiscall
cUserHistoryLog::SendBuffertoClientLog
          (cUserHistoryLog *this,int param_1,short param_2,uchar param_3,bool param_4)

{
  char *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = "ANTIBOT";
  }
  else {
    pcVar1 = "DPROTO";
  }
  CUser::LogHistory(*(CUser **)this,"SendBuffertoClient [%s],%d,%d,%d",pcVar1,(int)param_2,
                    (uint)param_3,(uint)param_4);
  return;
}
```
