# GetCurCharacTotalSP

`_ZN8WongWork13CSkillChanger19GetCurCharacTotalSPEPK5CUserb`

`WongWork::CSkillChanger::GetCurCharacTotalSP(CUser const*, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CSkillChanger` | `0x0860a1e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860a1e6  _ZN8WongWork13CSkillChanger19GetCurCharacTotalSPEPK5CUserb
#           WongWork::CSkillChanger::GetCurCharacTotalSP(CUser const*, bool)
# range [0x0860a1e6, 0x0860a2eb]
0860a1e6 +0x000:  push   %ebp
0860a1e7 +0x001:  mov    %esp,%ebp
0860a1e9 +0x003:  sub    $0x38,%esp
0860a1ec +0x006:  mov    0x10(%ebp),%eax
0860a1ef +0x009:  mov    %al,-0x1c(%ebp)
0860a1f2 +0x00c:  mov    0x8(%ebp),%eax
0860a1f5 +0x00f:  movzbl -0x1c(%ebp),%edx
0860a1f9 +0x013:  mov    %dl,0x90(%eax)
0860a1ff +0x019:  mov    0x8(%ebp),%eax
0860a202 +0x01c:  movl   $0x24,0x8(%esp)
0860a20a +0x024:  movl   $0x0,0x4(%esp)
0860a212 +0x02c:  mov    %eax,(%esp)
0860a215 +0x02f:  call   0807dcc0 <_init+0x5b8>
0860a21a +0x034:  mov    0x8(%ebp),%eax
0860a21d +0x037:  add    $0x24,%eax
0860a220 +0x03a:  movl   $0x24,0x8(%esp)
0860a228 +0x042:  movl   $0x0,0x4(%esp)
0860a230 +0x04a:  mov    %eax,(%esp)
0860a233 +0x04d:  call   0807dcc0 <_init+0x5b8>
0860a238 +0x052:  mov    0x8(%ebp),%eax
0860a23b +0x055:  add    $0x48,%eax
0860a23e +0x058:  movl   $0x24,0x8(%esp)
0860a246 +0x060:  movl   $0x0,0x4(%esp)
0860a24e +0x068:  mov    %eax,(%esp)
0860a251 +0x06b:  call   0807dcc0 <_init+0x5b8>
0860a256 +0x070:  mov    0x8(%ebp),%eax
0860a259 +0x073:  add    $0x6c,%eax
0860a25c +0x076:  movl   $0x24,0x8(%esp)
0860a264 +0x07e:  movl   $0x0,0x4(%esp)
0860a26c +0x086:  mov    %eax,(%esp)
0860a26f +0x089:  call   0807dcc0 <_init+0x5b8>
0860a274 +0x08e:  mov    0x8(%ebp),%eax
0860a277 +0x091:  movl   $0x8,(%eax)
0860a27d +0x097:  mov    0x8(%ebp),%eax
0860a280 +0x09a:  movl   $0x8,0x24(%eax)
0860a287 +0x0a1:  mov    0x8(%ebp),%eax
0860a28a +0x0a4:  movl   $0x8,0x48(%eax)
0860a291 +0x0ab:  mov    0x8(%ebp),%eax
0860a294 +0x0ae:  movl   $0x8,0x6c(%eax)
0860a29b +0x0b5:  mov    0x8(%ebp),%eax
0860a29e +0x0b8:  movb   $0x0,0x91(%eax)
0860a2a5 +0x0bf:  mov    0xc(%ebp),%eax
0860a2a8 +0x0c2:  mov    %eax,0x4(%esp)
0860a2ac +0x0c6:  mov    0x8(%ebp),%eax
0860a2af +0x0c9:  mov    %eax,(%esp)
0860a2b2 +0x0cc:  call   0860a634 <_ZNK8WongWork13CSkillChanger18_GetBaseSkillPointEPK5CUser>  ; WongWork::CSkillChanger::_GetBaseSkillPoint(CUser const*) const
0860a2b7 +0x0d1:  mov    %eax,-0x10(%ebp)
0860a2ba +0x0d4:  mov    0xc(%ebp),%eax
0860a2bd +0x0d7:  mov    %eax,0x4(%esp)
0860a2c1 +0x0db:  mov    0x8(%ebp),%eax
0860a2c4 +0x0de:  mov    %eax,(%esp)
0860a2c7 +0x0e1:  call   0860a34a <_ZN8WongWork13CSkillChanger17_GetUserItemCountEPK5CUser>  ; WongWork::CSkillChanger::_GetUserItemCount(CUser const*)
0860a2cc +0x0e6:  mov    0xc(%ebp),%eax
0860a2cf +0x0e9:  mov    %eax,0x4(%esp)
0860a2d3 +0x0ed:  mov    0x8(%ebp),%eax
0860a2d6 +0x0f0:  mov    %eax,(%esp)
0860a2d9 +0x0f3:  call   0860a6d0 <_ZN8WongWork13CSkillChanger19_GetQuestSkillPointEPK5CUser>  ; WongWork::CSkillChanger::_GetQuestSkillPoint(CUser const*)
0860a2de +0x0f8:  mov    %eax,-0xc(%ebp)
0860a2e1 +0x0fb:  mov    -0xc(%ebp),%eax
0860a2e4 +0x0fe:  mov    -0x10(%ebp),%edx
0860a2e7 +0x101:  lea    (%edx,%eax,1),%eax
0860a2ea +0x104:  leave
0860a2eb +0x105:  ret
```

## 反编译 C

```c
// WongWork::CSkillChanger::GetCurCharacTotalSP @ 0x860a1e6

/* WongWork::CSkillChanger::GetCurCharacTotalSP(CUser const*, bool) */

int __thiscall
WongWork::CSkillChanger::GetCurCharacTotalSP(CSkillChanger *this,CUser *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  
  this[0x90] = (CSkillChanger)param_2;
  memset(this,0,0x24);
  memset(this + 0x24,0,0x24);
  memset(this + 0x48,0,0x24);
  memset(this + 0x6c,0,0x24);
  *(undefined4 *)this = 8;
  *(undefined4 *)(this + 0x24) = 8;
  *(undefined4 *)(this + 0x48) = 8;
  *(undefined4 *)(this + 0x6c) = 8;
  this[0x91] = (CSkillChanger)0x0;
  iVar1 = _GetBaseSkillPoint(this,param_1);
  _GetUserItemCount(this,param_1);
  iVar2 = _GetQuestSkillPoint((CUser *)this);
  return iVar1 + iVar2;
}
```
