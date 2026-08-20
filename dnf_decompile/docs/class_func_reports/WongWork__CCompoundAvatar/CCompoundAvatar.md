# CCompoundAvatar

`_ZN8WongWork15CCompoundAvatarC1Ev`

`WongWork::CCompoundAvatar::CCompoundAvatar()`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08331d74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08331d74  _ZN8WongWork15CCompoundAvatarC1Ev
#           WongWork::CCompoundAvatar::CCompoundAvatar()
# range [0x08331d74, 0x08331ea1]
08331d74 +0x000:  push   %ebp
08331d75 +0x001:  mov    %esp,%ebp
08331d77 +0x003:  push   %edi
08331d78 +0x004:  push   %esi
08331d79 +0x005:  push   %ebx
08331d7a +0x006:  sub    $0x3c,%esp
08331d7d +0x009:  mov    0x8(%ebp),%ebx
08331d80 +0x00c:  mov    %ebx,%edi
08331d82 +0x00e:  mov    $0xa,%esi
08331d87 +0x013:  jmp    08331d97 <+0x23>
08331d89 +0x015:  mov    %edi,(%esp)
08331d8c +0x018:  call   0833431c <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x11a>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x11a
08331d91 +0x01d:  add    $0xc,%edi
08331d94 +0x020:  sub    $0x1,%esi
08331d97 +0x023:  cmp    $0xffffffff,%esi
08331d9a +0x026:  setne  %al
08331d9d +0x029:  test   %al,%al
08331d9f +0x02b:  jne    08331d89 <+0x15>
08331da1 +0x02d:  jmp    08331ddf <+0x6b>
08331da3 +0x02f:  mov    %edx,%edi
08331da5 +0x031:  mov    %eax,-0x2c(%ebp)
08331da8 +0x034:  test   %ebx,%ebx
08331daa +0x036:  je     08331dd2 <+0x5e>
08331dac +0x038:  mov    $0xa,%eax
08331db1 +0x03d:  sub    %esi,%eax
08331db3 +0x03f:  mov    %eax,%edx
08331db5 +0x041:  mov    %edx,%eax
08331db7 +0x043:  add    %eax,%eax
08331db9 +0x045:  add    %edx,%eax
08331dbb +0x047:  shl    $0x2,%eax
08331dbe +0x04a:  lea    (%ebx,%eax,1),%esi
08331dc1 +0x04d:  cmp    %ebx,%esi
08331dc3 +0x04f:  je     08331dd2 <+0x5e>
08331dc5 +0x051:  sub    $0xc,%esi
08331dc8 +0x054:  mov    %esi,(%esp)
08331dcb +0x057:  call   08334330 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x12e>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x12e
08331dd0 +0x05c:  jmp    08331dc1 <+0x4d>
08331dd2 +0x05e:  mov    -0x2c(%ebp),%eax
08331dd5 +0x061:  mov    %edi,%edx
08331dd7 +0x063:  mov    %eax,(%esp)
08331dda +0x066:  call   08ae3750 <_Unwind_Resume>
08331ddf +0x06b:  movl   $0x0,(%esp)
08331de6 +0x072:  call   0807d750 <_init+0x48>
08331deb +0x077:  mov    %eax,-0x24(%ebp)
08331dee +0x07a:  lea    -0x24(%ebp),%esi
08331df1 +0x07d:  movl   $0x9c8,(%esp)
08331df8 +0x084:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08331dfd +0x089:  mov    %eax,%ebx
08331dff +0x08b:  mov    %ebx,%eax
08331e01 +0x08d:  mov    %esi,0x4(%esp)
08331e05 +0x091:  mov    %eax,(%esp)
08331e08 +0x094:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
08331e0d +0x099:  jmp    08331e21 <+0xad>
08331e0f +0x09b:  mov    %edx,%esi
08331e11 +0x09d:  mov    %eax,%edi
08331e13 +0x09f:  mov    %ebx,(%esp)
08331e16 +0x0a2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08331e1b +0x0a7:  mov    %edi,%eax
08331e1d +0x0a9:  mov    %esi,%edx
08331e1f +0x0ab:  jmp    08331e65 <+0xf1>
08331e21 +0x0ad:  mov    %ebx,%edx
08331e23 +0x0af:  mov    0x8(%ebp),%eax
08331e26 +0x0b2:  mov    %edx,0x84(%eax)
08331e2c +0x0b8:  movl   $0x0,-0x1c(%ebp)
08331e33 +0x0bf:  jmp    08331e58 <+0xe4>
08331e35 +0x0c1:  movl   $0x2710,-0x20(%ebp)
08331e3c +0x0c8:  mov    0x8(%ebp),%eax
08331e3f +0x0cb:  mov    0x84(%eax),%eax
08331e45 +0x0d1:  lea    -0x20(%ebp),%edx
08331e48 +0x0d4:  mov    %edx,0x4(%esp)
08331e4c +0x0d8:  mov    %eax,(%esp)
08331e4f +0x0db:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
08331e54 +0x0e0:  addl   $0x1,-0x1c(%ebp)
08331e58 +0x0e4:  cmpl   $0x63,-0x1c(%ebp)
08331e5c +0x0e8:  setle  %al
08331e5f +0x0eb:  test   %al,%al
08331e61 +0x0ed:  jne    08331e35 <+0xc1>
08331e63 +0x0ef:  jmp    08331e99 <+0x125>
08331e65 +0x0f1:  mov    %edx,%esi
08331e67 +0x0f3:  mov    %eax,%edi
08331e69 +0x0f5:  mov    0x8(%ebp),%eax
08331e6c +0x0f8:  test   %eax,%eax
08331e6e +0x0fa:  je     08331e8d <+0x119>
08331e70 +0x0fc:  mov    0x8(%ebp),%eax
08331e73 +0x0ff:  lea    0x84(%eax),%ebx
08331e79 +0x105:  mov    0x8(%ebp),%eax
08331e7c +0x108:  cmp    %eax,%ebx
08331e7e +0x10a:  je     08331e8d <+0x119>
08331e80 +0x10c:  sub    $0xc,%ebx
08331e83 +0x10f:  mov    %ebx,(%esp)
08331e86 +0x112:  call   08334330 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x12e>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x12e
08331e8b +0x117:  jmp    08331e79 <+0x105>
08331e8d +0x119:  mov    %edi,%eax
08331e8f +0x11b:  mov    %esi,%edx
08331e91 +0x11d:  mov    %eax,(%esp)
08331e94 +0x120:  call   08ae3750 <_Unwind_Resume>
08331e99 +0x125:  add    $0x3c,%esp
08331e9c +0x128:  pop    %ebx
08331e9d +0x129:  pop    %esi
08331e9e +0x12a:  pop    %edi
08331e9f +0x12b:  pop    %ebp
08331ea0 +0x12c:  ret
08331ea1 +0x12d:  nop
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::CCompoundAvatar @ 0x8331d74

/* WongWork::CCompoundAvatar::CCompoundAvatar() */

void __thiscall WongWork::CCompoundAvatar::CCompoundAvatar(CCompoundAvatar *this)

{
  CMTRand *this_00;
  int iVar1;
  CCompoundAvatar *this_01;
  ulong local_28 [6];
  
  this_01 = this;
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08331d8c to 08331d90 has its CatchHandler @ 08331da3 */
    tagCompoundAvatarTable::tagCompoundAvatarTable((tagCompoundAvatarTable *)this_01);
    this_01 = this_01 + 0xc;
  }
  local_28[0] = time((time_t *)0x0);
                    /* try { // try from 08331df8 to 08331dfc has its CatchHandler @ 08331e65 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08331e08 to 08331e0c has its CatchHandler @ 08331e0f */
  CMTRand::CMTRand(this_00,local_28);
  *(CMTRand **)(this + 0x84) = this_00;
  for (local_28[2] = 0; (int)local_28[2] < 100; local_28[2] = local_28[2] + 1) {
    local_28[1] = 10000;
    CMTRand::randInt(*(CMTRand **)(this + 0x84),local_28 + 1);
  }
  return;
}
```
