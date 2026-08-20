# dispatch

`_ZN25DB_RequestCharacSkillInfo8dispatchEiiP6Stream`

`DB_RequestCharacSkillInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_RequestCharacSkillInfo` | `0x084474f2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084474f2  _ZN25DB_RequestCharacSkillInfo8dispatchEiiP6Stream
#           DB_RequestCharacSkillInfo::dispatch(int, int, Stream*)
# range [0x084474f2, 0x0844759f]
084474f2 +0x00:  push   %ebp
084474f3 +0x01:  mov    %esp,%ebp
084474f5 +0x03:  sub    $0x28,%esp
084474f8 +0x06:  mov    0x14(%ebp),%eax
084474fb +0x09:  mov    %eax,(%esp)
084474fe +0x0c:  call   084544c0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x70d6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x70d6
08447503 +0x11:  mov    %eax,-0x10(%ebp)
08447506 +0x14:  mov    -0x10(%ebp),%eax
08447509 +0x17:  lea    0x19c(%eax),%edx
0844750f +0x1d:  mov    -0x10(%ebp),%eax
08447512 +0x20:  mov    (%eax),%eax
08447514 +0x22:  mov    %edx,0x8(%esp)
08447518 +0x26:  mov    %eax,0x4(%esp)
0844751c +0x2a:  mov    0x8(%ebp),%eax
0844751f +0x2d:  mov    %eax,(%esp)
08447522 +0x30:  call   08447162 <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc>  ; DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)
08447527 +0x35:  mov    %al,-0x9(%ebp)
0844752a +0x38:  movzbl -0x9(%ebp),%eax
0844752e +0x3c:  xor    $0x1,%eax
08447531 +0x3f:  test   %al,%al
08447533 +0x41:  je     0844753c <+0x4a>
08447535 +0x43:  mov    $0x0,%eax
0844753a +0x48:  jmp    0844759e <+0xac>
0844753c +0x4a:  mov    -0x10(%ebp),%eax
0844753f +0x4d:  lea    0x4(%eax),%ecx
08447542 +0x50:  mov    -0x10(%ebp),%eax
08447545 +0x53:  movzbl 0x19c(%eax),%eax
0844754c +0x5a:  movsbl %al,%edx
0844754f +0x5d:  mov    -0x10(%ebp),%eax
08447552 +0x60:  mov    (%eax),%eax
08447554 +0x62:  mov    %ecx,0xc(%esp)
08447558 +0x66:  mov    %edx,0x8(%esp)
0844755c +0x6a:  mov    %eax,0x4(%esp)
08447560 +0x6e:  mov    0x8(%ebp),%eax
08447563 +0x71:  mov    %eax,(%esp)
08447566 +0x74:  call   08447312 <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill>  ; DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)
0844756b +0x79:  mov    %al,-0x9(%ebp)
0844756e +0x7c:  movzbl -0x9(%ebp),%eax
08447572 +0x80:  xor    $0x1,%eax
08447575 +0x83:  test   %al,%al
08447577 +0x85:  je     08447580 <+0x8e>
08447579 +0x87:  mov    $0x0,%eax
0844757e +0x8c:  jmp    0844759e <+0xac>
08447580 +0x8e:  mov    -0x10(%ebp),%eax
08447583 +0x91:  mov    %eax,0x8(%esp)
08447587 +0x95:  mov    0x10(%ebp),%eax
0844758a +0x98:  mov    %eax,0x4(%esp)
0844758e +0x9c:  mov    0x8(%ebp),%eax
08447591 +0x9f:  mov    %eax,(%esp)
08447594 +0xa2:  call   084475a0 <_ZN25DB_RequestCharacSkillInfo10sendResultEiP29SIG_REQUEST_CHARAC_SKILL_INFO>  ; DB_RequestCharacSkillInfo::sendResult(int, SIG_REQUEST_CHARAC_SKILL_INFO*)
08447599 +0xa7:  mov    $0x1,%eax
0844759e +0xac:  leave
0844759f +0xad:  ret
```

## 反编译 C

```c
// DB_RequestCharacSkillInfo::dispatch @ 0x84474f2

/* DB_RequestCharacSkillInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_RequestCharacSkillInfo::dispatch
          (DB_RequestCharacSkillInfo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_REQUEST_CHARAC_SKILL_INFO *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_REQUEST_CHARAC_SKILL_INFO>(param_3);
  cVar1 = _GetSkillTreeIndex(this,*(uint *)pSVar2,(char *)(pSVar2 + 0x19c));
  if (cVar1 == '\x01') {
    cVar1 = _GetSkillInfo(this,*(uint *)pSVar2,(char)pSVar2[0x19c],(_Mastered_skill *)(pSVar2 + 4));
    if (cVar1 == '\x01') {
      sendResult(this,param_2,pSVar2);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
