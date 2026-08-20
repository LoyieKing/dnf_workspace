# CheckCompetitionAreaIndex

`_ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci`

`CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b2b34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b2b34  _ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci
#           CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const
# range [0x081b2b34, 0x081b2bc3]
081b2b34 +0x00:  push   %ebp
081b2b35 +0x01:  mov    %esp,%ebp
081b2b37 +0x03:  push   %ebx
081b2b38 +0x04:  sub    $0x24,%esp
081b2b3b +0x07:  mov    0xc(%ebp),%eax
081b2b3e +0x0a:  mov    %al,-0xc(%ebp)
081b2b41 +0x0d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2b46 +0x12:  add    $0xa91c,%eax
081b2b4b +0x17:  mov    %eax,(%esp)
081b2b4e +0x1a:  call   081b47e8 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x5c>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x5c
081b2b53 +0x1f:  test   %al,%al
081b2b55 +0x21:  jne    081b2b71 <+0x3d>
081b2b57 +0x23:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2b5c +0x28:  add    $0xa91c,%eax
081b2b61 +0x2d:  mov    %eax,(%esp)
081b2b64 +0x30:  call   081b482c <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xa0>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xa0
081b2b69 +0x35:  movsbl -0xc(%ebp),%edx
081b2b6d +0x39:  cmp    %edx,%eax
081b2b6f +0x3b:  jae    081b2b78 <+0x44>
081b2b71 +0x3d:  mov    $0x1,%eax
081b2b76 +0x42:  jmp    081b2b7d <+0x49>
081b2b78 +0x44:  mov    $0x0,%eax
081b2b7d +0x49:  test   %al,%al
081b2b7f +0x4b:  je     081b2b88 <+0x54>
081b2b81 +0x4d:  mov    $0x0,%eax
081b2b86 +0x52:  jmp    081b2bbd <+0x89>
081b2b88 +0x54:  movsbl -0xc(%ebp),%ebx
081b2b8c +0x58:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081b2b91 +0x5d:  add    $0xa91c,%eax
081b2b96 +0x62:  mov    %ebx,0x4(%esp)
081b2b9a +0x66:  mov    %eax,(%esp)
081b2b9d +0x69:  call   081b484e <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0xc2>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0xc2
081b2ba2 +0x6e:  movzwl 0x14(%eax),%eax
081b2ba6 +0x72:  cwtl
081b2ba7 +0x73:  cmp    0x10(%ebp),%eax
081b2baa +0x76:  setg   %al
081b2bad +0x79:  test   %al,%al
081b2baf +0x7b:  je     081b2bb8 <+0x84>
081b2bb1 +0x7d:  mov    $0x0,%eax
081b2bb6 +0x82:  jmp    081b2bbd <+0x89>
081b2bb8 +0x84:  mov    $0x1,%eax
081b2bbd +0x89:  add    $0x24,%esp
081b2bc0 +0x8c:  pop    %ebx
081b2bc1 +0x8d:  pop    %ebp
081b2bc2 +0x8e:  ret
081b2bc3 +0x8f:  nop
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex @ 0x81b2b34

/* CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const */

undefined4 __thiscall
CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex
          (CHARAC_LOAD_MERCENARY *this,char param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  G_CDataManager();
  cVar2 = std::vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::empty
                    ();
  if (cVar2 == '\0') {
    iVar3 = G_CDataManager();
    uVar4 = std::vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::size
                      ((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                        *)(iVar3 + 0xa91c));
    if ((uint)(int)param_1 <= uVar4) {
      bVar1 = false;
      goto LAB_081b2b7d;
    }
  }
  bVar1 = true;
LAB_081b2b7d:
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    iVar3 = G_CDataManager();
    iVar3 = std::vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>::
            operator[]((vector<stMercenaryCompetitionArea,std::allocator<stMercenaryCompetitionArea>>
                        *)(iVar3 + 0xa91c),(int)param_1);
    if (param_2 < *(short *)(iVar3 + 0x14)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}
```
