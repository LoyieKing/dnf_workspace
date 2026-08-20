# CompetitionCharac

`_ZN20UserMercenaryInfoMgr17CompetitionCharacEP5CUserjcc`

`UserMercenaryInfoMgr::CompetitionCharac(CUser*, unsigned int, char, char)`

| 类 | 地址 |
|---|---|
| `UserMercenaryInfoMgr` | `0x081b4536` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b4536  _ZN20UserMercenaryInfoMgr17CompetitionCharacEP5CUserjcc
#           UserMercenaryInfoMgr::CompetitionCharac(CUser*, unsigned int, char, char)
# range [0x081b4536, 0x081b45cd]
081b4536 +0x00:  push   %ebp
081b4537 +0x01:  mov    %esp,%ebp
081b4539 +0x03:  push   %esi
081b453a +0x04:  push   %ebx
081b453b +0x05:  sub    $0x30,%esp
081b453e +0x08:  mov    0x14(%ebp),%edx
081b4541 +0x0b:  mov    0x18(%ebp),%eax
081b4544 +0x0e:  mov    %dl,-0x1c(%ebp)
081b4547 +0x11:  mov    %al,-0x20(%ebp)
081b454a +0x14:  mov    0x10(%ebp),%eax
081b454d +0x17:  mov    %eax,0x4(%esp)
081b4551 +0x1b:  mov    0x8(%ebp),%eax
081b4554 +0x1e:  mov    %eax,(%esp)
081b4557 +0x21:  call   081b42ae <_ZNK20UserMercenaryInfoMgr19FindIndexByCharacNoEj>  ; UserMercenaryInfoMgr::FindIndexByCharacNo(unsigned int) const
081b455c +0x26:  mov    %eax,-0xc(%ebp)
081b455f +0x29:  mov    -0xc(%ebp),%eax
081b4562 +0x2c:  movzbl %al,%eax
081b4565 +0x2f:  mov    %eax,0x4(%esp)
081b4569 +0x33:  mov    0x8(%ebp),%eax
081b456c +0x36:  mov    %eax,(%esp)
081b456f +0x39:  call   081b4262 <_ZNK20UserMercenaryInfoMgr16CheckCharacIndexEh>  ; UserMercenaryInfoMgr::CheckCharacIndex(unsigned char) const
081b4574 +0x3e:  xor    $0x1,%eax
081b4577 +0x41:  test   %al,%al
081b4579 +0x43:  je     081b4582 <+0x4c>
081b457b +0x45:  mov    $0x0,%eax
081b4580 +0x4a:  jmp    081b45c6 <+0x90>
081b4582 +0x4c:  movsbl -0x20(%ebp),%esi
081b4586 +0x50:  movsbl -0x1c(%ebp),%ebx
081b458a +0x54:  mov    -0xc(%ebp),%edx
081b458d +0x57:  mov    0x8(%ebp),%eax
081b4590 +0x5a:  mov    %edx,0x4(%esp)
081b4594 +0x5e:  mov    %eax,(%esp)
081b4597 +0x61:  call   081b4b46 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x3ba>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x3ba
081b459c +0x66:  mov    %esi,0xc(%esp)
081b45a0 +0x6a:  mov    %ebx,0x8(%esp)
081b45a4 +0x6e:  mov    0xc(%ebp),%edx
081b45a7 +0x71:  mov    %edx,0x4(%esp)
081b45ab +0x75:  mov    %eax,(%esp)
081b45ae +0x78:  call   081b3814 <_ZN21CHARAC_LOAD_MERCENARY11CompetitionEP5CUsercc>  ; CHARAC_LOAD_MERCENARY::Competition(CUser*, char, char)
081b45b3 +0x7d:  xor    $0x1,%eax
081b45b6 +0x80:  test   %al,%al
081b45b8 +0x82:  je     081b45c1 <+0x8b>
081b45ba +0x84:  mov    $0x0,%eax
081b45bf +0x89:  jmp    081b45c6 <+0x90>
081b45c1 +0x8b:  mov    $0x1,%eax
081b45c6 +0x90:  add    $0x30,%esp
081b45c9 +0x93:  pop    %ebx
081b45ca +0x94:  pop    %esi
081b45cb +0x95:  pop    %ebp
081b45cc +0x96:  ret
081b45cd +0x97:  nop
```

## 反编译 C

```c
// UserMercenaryInfoMgr::CompetitionCharac @ 0x81b4536

/* UserMercenaryInfoMgr::CompetitionCharac(CUser*, unsigned int, char, char) */

undefined4 __thiscall
UserMercenaryInfoMgr::CompetitionCharac
          (UserMercenaryInfoMgr *this,CUser *param_1,uint param_2,char param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  CHARAC_LOAD_MERCENARY *this_00;
  
  uVar2 = FindIndexByCharacNo(this,param_2);
  cVar1 = CheckCharacIndex(this,(uchar)uVar2);
  if (cVar1 == '\x01') {
    this_00 = (CHARAC_LOAD_MERCENARY *)
              std::vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>>::operator[]
                        ((vector<CHARAC_LOAD_MERCENARY,std::allocator<CHARAC_LOAD_MERCENARY>> *)this
                         ,uVar2);
    cVar1 = CHARAC_LOAD_MERCENARY::Competition(this_00,param_1,param_3,param_4);
    if (cVar1 == '\x01') {
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
