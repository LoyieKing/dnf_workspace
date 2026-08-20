# _GetConnectP2PMaxMinPoint

`_ZN6CParty25_GetConnectP2PMaxMinPointERiS0_`

`CParty::_GetConnectP2PMaxMinPoint(int&, int&)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a7a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a7a2  _ZN6CParty25_GetConnectP2PMaxMinPointERiS0_
#           CParty::_GetConnectP2PMaxMinPoint(int&, int&)
# range [0x0859a7a2, 0x0859a82f]
0859a7a2 +0x00:  push   %ebp
0859a7a3 +0x01:  mov    %esp,%ebp
0859a7a5 +0x03:  sub    $0x28,%esp
0859a7a8 +0x06:  mov    0xc(%ebp),%eax
0859a7ab +0x09:  movl   $0x0,(%eax)
0859a7b1 +0x0f:  mov    0x10(%ebp),%eax
0859a7b4 +0x12:  movl   $0x4,(%eax)
0859a7ba +0x18:  movl   $0x0,-0x10(%ebp)
0859a7c1 +0x1f:  movl   $0x0,-0xc(%ebp)
0859a7c8 +0x26:  jmp    0859a823 <+0x81>
0859a7ca +0x28:  mov    -0xc(%ebp),%eax
0859a7cd +0x2b:  mov    %eax,0x4(%esp)
0859a7d1 +0x2f:  mov    0x8(%ebp),%eax
0859a7d4 +0x32:  mov    %eax,(%esp)
0859a7d7 +0x35:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859a7dc +0x3a:  xor    $0x1,%eax
0859a7df +0x3d:  test   %al,%al
0859a7e1 +0x3f:  jne    0859a81e <+0x7c>
0859a7e3 +0x41:  mov    -0xc(%ebp),%eax
0859a7e6 +0x44:  mov    %eax,0x4(%esp)
0859a7ea +0x48:  mov    0x8(%ebp),%eax
0859a7ed +0x4b:  mov    %eax,(%esp)
0859a7f0 +0x4e:  call   0859a74c <_ZN6CParty19_GetConnectP2PPointEi>  ; CParty::_GetConnectP2PPoint(int)
0859a7f5 +0x53:  mov    %eax,-0x10(%ebp)
0859a7f8 +0x56:  mov    0x10(%ebp),%eax
0859a7fb +0x59:  mov    (%eax),%eax
0859a7fd +0x5b:  cmp    -0x10(%ebp),%eax
0859a800 +0x5e:  jle    0859a80a <+0x68>
0859a802 +0x60:  mov    0x10(%ebp),%eax
0859a805 +0x63:  mov    -0x10(%ebp),%edx
0859a808 +0x66:  mov    %edx,(%eax)
0859a80a +0x68:  mov    0xc(%ebp),%eax
0859a80d +0x6b:  mov    (%eax),%eax
0859a80f +0x6d:  cmp    -0x10(%ebp),%eax
0859a812 +0x70:  jge    0859a81f <+0x7d>
0859a814 +0x72:  mov    0xc(%ebp),%eax
0859a817 +0x75:  mov    -0x10(%ebp),%edx
0859a81a +0x78:  mov    %edx,(%eax)
0859a81c +0x7a:  jmp    0859a81f <+0x7d>
0859a81e +0x7c:  nop
0859a81f +0x7d:  addl   $0x1,-0xc(%ebp)
0859a823 +0x81:  cmpl   $0x3,-0xc(%ebp)
0859a827 +0x85:  setle  %al
0859a82a +0x88:  test   %al,%al
0859a82c +0x8a:  jne    0859a7ca <+0x28>
0859a82e +0x8c:  leave
0859a82f +0x8d:  ret
```

## 反编译 C

```c
// CParty::_GetConnectP2PMaxMinPoint @ 0x859a7a2

/* CParty::_GetConnectP2PMaxMinPoint(int&, int&) */

void __thiscall CParty::_GetConnectP2PMaxMinPoint(CParty *this,int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_10;
  
  *param_1 = 0;
  *param_2 = 4;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      iVar2 = _GetConnectP2PPoint(this,local_10);
      if (iVar2 < *param_2) {
        *param_2 = iVar2;
      }
      if (*param_1 < iVar2) {
        *param_1 = iVar2;
      }
    }
  }
  return;
}
```
