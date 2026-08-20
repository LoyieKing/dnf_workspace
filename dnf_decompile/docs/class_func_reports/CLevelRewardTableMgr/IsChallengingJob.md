# IsChallengingJob

`_ZN20CLevelRewardTableMgr16IsChallengingJobEc`

`CLevelRewardTableMgr::IsChallengingJob(char)`

| 类 | 地址 |
|---|---|
| `CLevelRewardTableMgr` | `0x08687792` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08687792  _ZN20CLevelRewardTableMgr16IsChallengingJobEc
#           CLevelRewardTableMgr::IsChallengingJob(char)
# range [0x08687792, 0x08687827]
08687792 +0x00:  push   %ebp
08687793 +0x01:  mov    %esp,%ebp
08687795 +0x03:  sub    $0x38,%esp
08687798 +0x06:  mov    0xc(%ebp),%eax
0868779b +0x09:  mov    %al,-0x1c(%ebp)
0868779e +0x0c:  mov    0x8(%ebp),%eax
086877a1 +0x0f:  mov    %eax,(%esp)
086877a4 +0x12:  call   08687e62 <_ZNK20CLevelRewardTableMgr26GetProperLevelRewardTableREv>  ; CLevelRewardTableMgr::GetProperLevelRewardTableR() const
086877a9 +0x17:  mov    %eax,-0x14(%ebp)
086877ac +0x1a:  cmpl   $0x0,-0x14(%ebp)
086877b0 +0x1e:  jne    086877b9 <+0x27>
086877b2 +0x20:  mov    $0x0,%eax
086877b7 +0x25:  jmp    08687826 <+0x94>
086877b9 +0x27:  cmpb   $0xa,-0x1c(%ebp)
086877bd +0x2b:  jg     086877c5 <+0x33>
086877bf +0x2d:  cmpb   $0x0,-0x1c(%ebp)
086877c3 +0x31:  jns    086877cc <+0x3a>
086877c5 +0x33:  mov    $0x0,%eax
086877ca +0x38:  jmp    08687826 <+0x94>
086877cc +0x3a:  movsbl -0x1c(%ebp),%eax
086877d0 +0x3e:  add    $0x1,%eax
086877d3 +0x41:  movl   $0x0,0x8(%esp)
086877db +0x49:  mov    %eax,0x4(%esp)
086877df +0x4d:  mov    -0x14(%ebp),%eax
086877e2 +0x50:  mov    %eax,(%esp)
086877e5 +0x53:  call   086976f6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3f4b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3f4b
086877ea +0x58:  mov    %eax,-0x10(%ebp)
086877ed +0x5b:  movsbl -0x1c(%ebp),%eax
086877f1 +0x5f:  add    $0x1,%eax
086877f4 +0x62:  movl   $0x0,0x8(%esp)
086877fc +0x6a:  mov    %eax,0x4(%esp)
08687800 +0x6e:  mov    -0x14(%ebp),%eax
08687803 +0x71:  mov    %eax,(%esp)
08687806 +0x74:  call   08697712 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3f67>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3f67
0868780b +0x79:  mov    %eax,-0xc(%ebp)
0868780e +0x7c:  cmpl   $0x0,-0x10(%ebp)
08687812 +0x80:  jne    08687821 <+0x8f>
08687814 +0x82:  cmpl   $0x0,-0xc(%ebp)
08687818 +0x86:  jne    08687821 <+0x8f>
0868781a +0x88:  mov    $0x0,%eax
0868781f +0x8d:  jmp    08687826 <+0x94>
08687821 +0x8f:  mov    $0x1,%eax
08687826 +0x94:  leave
08687827 +0x95:  ret
```

## 反编译 C

```c
// CLevelRewardTableMgr::IsChallengingJob @ 0x8687792

/* CLevelRewardTableMgr::IsChallengingJob(char) */

undefined4 __thiscall
CLevelRewardTableMgr::IsChallengingJob(CLevelRewardTableMgr *this,char param_1)

{
  CLevelRewardTable *this_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (CLevelRewardTable *)GetProperLevelRewardTableR(this);
  if (this_00 == (CLevelRewardTable *)0x0) {
    uVar1 = 0;
  }
  else if ((param_1 < '\v') && (-1 < param_1)) {
    iVar2 = CLevelRewardTable::GetRewardItemNo(this_00,param_1 + 1,0);
    iVar3 = CLevelRewardTable::GetItemCount(this_00,param_1 + 1,0);
    if ((iVar2 == 0) && (iVar3 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
