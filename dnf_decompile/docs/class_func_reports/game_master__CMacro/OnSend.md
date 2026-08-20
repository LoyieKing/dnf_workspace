# OnSend

`_ZN11game_master6CMacro6OnSendEii`

`game_master::CMacro::OnSend(int, int)`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a88aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a88aa  _ZN11game_master6CMacro6OnSendEii
#           game_master::CMacro::OnSend(int, int)
# range [0x084a88aa, 0x084a8923]
084a88aa +0x00:  push   %ebp
084a88ab +0x01:  mov    %esp,%ebp
084a88ad +0x03:  sub    $0x38,%esp
084a88b0 +0x06:  mov    0x8(%ebp),%eax
084a88b3 +0x09:  mov    (%eax),%eax
084a88b5 +0x0b:  cmp    $0x1,%eax
084a88b8 +0x0e:  je     084a88c1 <+0x17>
084a88ba +0x10:  cmp    $0x2,%eax
084a88bd +0x13:  je     084a88ec <+0x42>
084a88bf +0x15:  jmp    084a8922 <+0x78>
084a88c1 +0x17:  movl   $0x0,0x10(%esp)
084a88c9 +0x1f:  movl   $0x0,0xc(%esp)
084a88d1 +0x27:  mov    0x10(%ebp),%eax
084a88d4 +0x2a:  mov    %eax,0x8(%esp)
084a88d8 +0x2e:  mov    0xc(%ebp),%eax
084a88db +0x31:  mov    %eax,0x4(%esp)
084a88df +0x35:  mov    0x8(%ebp),%eax
084a88e2 +0x38:  mov    %eax,(%esp)
084a88e5 +0x3b:  call   084a8802 <_ZN11game_master6CMacro9RecordingEiiPci>  ; game_master::CMacro::Recording(int, int, char*, int)
084a88ea +0x40:  jmp    084a8922 <+0x78>
084a88ec +0x42:  mov    0x8(%ebp),%eax
084a88ef +0x45:  mov    %eax,(%esp)
084a88f2 +0x48:  call   084a87e2 <_ZN11game_master6CMacro9GetCurCmdEv>  ; game_master::CMacro::GetCurCmd()
084a88f7 +0x4d:  mov    %eax,-0xc(%ebp)
084a88fa +0x50:  mov    -0xc(%ebp),%eax
084a88fd +0x53:  movzbl (%eax),%eax
084a8900 +0x56:  movzbl %al,%eax
084a8903 +0x59:  cmp    0xc(%ebp),%eax
084a8906 +0x5c:  jne    084a8922 <+0x78>
084a8908 +0x5e:  mov    -0xc(%ebp),%eax
084a890b +0x61:  movzbl 0x1(%eax),%eax
084a890f +0x65:  movzbl %al,%eax
084a8912 +0x68:  cmp    0x10(%ebp),%eax
084a8915 +0x6b:  jne    084a8922 <+0x78>
084a8917 +0x6d:  mov    0x8(%ebp),%eax
084a891a +0x70:  mov    %eax,(%esp)
084a891d +0x73:  call   084a86fe <_ZN11game_master6CMacro7NextCmdEv>  ; game_master::CMacro::NextCmd()
084a8922 +0x78:  leave
084a8923 +0x79:  ret
```

## 反编译 C

```c
// game_master::CMacro::OnSend @ 0x84a88aa

/* game_master::CMacro::OnSend(int, int) */

void __thiscall game_master::CMacro::OnSend(CMacro *this,int param_1,int param_2)

{
  byte *pbVar1;
  
  if (*(int *)this == 1) {
    Recording(this,param_1,param_2,(char *)0x0,0);
  }
  else if (((*(int *)this == 2) && (pbVar1 = (byte *)GetCurCmd(this), (uint)*pbVar1 == param_1)) &&
          ((uint)pbVar1[1] == param_2)) {
    NextCmd(this);
  }
  return;
}
```
