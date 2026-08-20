# handleInformNoticeFlag

`_ZN5CUser22handleInformNoticeFlagEj`

`CUser::handleInformNoticeFlag(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f956` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f956  _ZN5CUser22handleInformNoticeFlagEj
#           CUser::handleInformNoticeFlag(unsigned int)
# range [0x0868f956, 0x0868f9e7]
0868f956 +0x00:  push   %ebp
0868f957 +0x01:  mov    %esp,%ebp
0868f959 +0x03:  push   %edi
0868f95a +0x04:  push   %esi
0868f95b +0x05:  push   %ebx
0868f95c +0x06:  sub    $0x2c,%esp
0868f95f +0x09:  mov    0xc(%ebp),%eax
0868f962 +0x0c:  and    $0x7,%eax
0868f965 +0x0f:  mov    %eax,-0x20(%ebp)
0868f968 +0x12:  cmpl   $0x7,-0x20(%ebp)
0868f96c +0x16:  ja     0868f9d9 <+0x83>
0868f96e +0x18:  mov    0xc(%ebp),%eax
0868f971 +0x1b:  shr    $0x3,%eax
0868f974 +0x1e:  mov    %eax,-0x1c(%ebp)
0868f977 +0x21:  cmpl   $0xf,-0x1c(%ebp)
0868f97b +0x25:  ja     0868f9dc <+0x86>
0868f97d +0x27:  mov    -0x1c(%ebp),%eax
0868f980 +0x2a:  mov    %eax,0x8(%esp)
0868f984 +0x2e:  mov    -0x20(%ebp),%eax
0868f987 +0x31:  mov    %eax,0x4(%esp)
0868f98b +0x35:  mov    0x8(%ebp),%eax
0868f98e +0x38:  mov    %eax,(%esp)
0868f991 +0x3b:  call   0868f9e8 <_ZN5CUser21checkInformNoticeFlagEjj>  ; CUser::checkInformNoticeFlag(unsigned int, unsigned int)
0868f996 +0x40:  test   %al,%al
0868f998 +0x42:  je     0868f9df <+0x89>
0868f99a +0x44:  mov    -0x1c(%ebp),%eax
0868f99d +0x47:  mov    -0x1c(%ebp),%edx
0868f9a0 +0x4a:  mov    0x8(%ebp),%ecx
0868f9a3 +0x4d:  movzbl 0x8ebb1(%ecx,%edx,1),%edx
0868f9ab +0x55:  mov    %edx,%ebx
0868f9ad +0x57:  mov    -0x20(%ebp),%edx
0868f9b0 +0x5a:  mov    $0x1,%esi
0868f9b5 +0x5f:  mov    %esi,%edi
0868f9b7 +0x61:  mov    %edx,%ecx
0868f9b9 +0x63:  shl    %cl,%edi
0868f9bb +0x65:  mov    %edi,%edx
0868f9bd +0x67:  lea    (%ebx,%edx,1),%edx
0868f9c0 +0x6a:  mov    %edx,%ecx
0868f9c2 +0x6c:  mov    0x8(%ebp),%edx
0868f9c5 +0x6f:  mov    %cl,0x8ebb1(%edx,%eax,1)
0868f9cc +0x76:  mov    0x8(%ebp),%eax
0868f9cf +0x79:  mov    %eax,(%esp)
0868f9d2 +0x7c:  call   0868fa56 <_ZN5CUser26enableSaveInformNoticeFlagEv>  ; CUser::enableSaveInformNoticeFlag()
0868f9d7 +0x81:  jmp    0868f9e0 <+0x8a>
0868f9d9 +0x83:  nop
0868f9da +0x84:  jmp    0868f9e0 <+0x8a>
0868f9dc +0x86:  nop
0868f9dd +0x87:  jmp    0868f9e0 <+0x8a>
0868f9df +0x89:  nop
0868f9e0 +0x8a:  add    $0x2c,%esp
0868f9e3 +0x8d:  pop    %ebx
0868f9e4 +0x8e:  pop    %esi
0868f9e5 +0x8f:  pop    %edi
0868f9e6 +0x90:  pop    %ebp
0868f9e7 +0x91:  ret
```

## 反编译 C

```c
// CUser::handleInformNoticeFlag @ 0x868f956

/* CUser::handleInformNoticeFlag(unsigned int) */

void __thiscall CUser::handleInformNoticeFlag(CUser *this,uint param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 7;
  if (((uVar2 < 8) && (uVar3 = param_1 >> 3, uVar3 < 0x10)) &&
     (cVar1 = checkInformNoticeFlag(this,uVar2,uVar3), cVar1 != '\0')) {
    this[uVar3 + 0x8ebb1] = (CUser)((char)this[uVar3 + 0x8ebb1] + (char)(1 << (sbyte)uVar2));
    enableSaveInformNoticeFlag(this);
  }
  return;
}
```
