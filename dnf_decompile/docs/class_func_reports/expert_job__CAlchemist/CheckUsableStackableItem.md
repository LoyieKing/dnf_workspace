# CheckUsableStackableItem

`_ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem`

`expert_job::CAlchemist::CheckUsableStackableItem(CUser*, CItem const*)`

| 类 | 地址 |
|---|---|
| `expert_job::CAlchemist` | `0x085d18e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d18e2  _ZN10expert_job10CAlchemist24CheckUsableStackableItemEP5CUserPK5CItem
#           expert_job::CAlchemist::CheckUsableStackableItem(CUser*, CItem const*)
# range [0x085d18e2, 0x085d1978]
085d18e2 +0x00:  push   %ebp
085d18e3 +0x01:  mov    %esp,%ebp
085d18e5 +0x03:  push   %ebx
085d18e6 +0x04:  sub    $0x24,%esp
085d18e9 +0x07:  mov    0xc(%ebp),%eax
085d18ec +0x0a:  mov    %eax,(%esp)
085d18ef +0x0d:  call   0822c9d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x207c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x207c
085d18f4 +0x12:  cmp    $0x2,%eax
085d18f7 +0x15:  sete   %al
085d18fa +0x18:  test   %al,%al
085d18fc +0x1a:  je     085d196e <+0x8c>
085d18fe +0x1c:  mov    0x8(%ebp),%eax
085d1901 +0x1f:  mov    %eax,(%esp)
085d1904 +0x22:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
085d1909 +0x27:  mov    %eax,-0x14(%ebp)
085d190c +0x2a:  cmpl   $0x0,-0x14(%ebp)
085d1910 +0x2e:  je     085d196e <+0x8c>
085d1912 +0x30:  movl   $0x0,-0x10(%ebp)
085d1919 +0x37:  jmp    085d1963 <+0x81>
085d191b +0x39:  mov    -0x10(%ebp),%eax
085d191e +0x3c:  mov    %eax,0x4(%esp)
085d1922 +0x40:  mov    -0x14(%ebp),%eax
085d1925 +0x43:  mov    %eax,(%esp)
085d1928 +0x46:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
085d192d +0x4b:  mov    %eax,-0xc(%ebp)
085d1930 +0x4e:  cmpl   $0x0,-0xc(%ebp)
085d1934 +0x52:  je     085d195f <+0x7d>
085d1936 +0x54:  mov    -0xc(%ebp),%eax
085d1939 +0x57:  mov    %eax,(%esp)
085d193c +0x5a:  call   085d1a0a <_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev+0x51>  ; global constructors keyed to expert_job::CAlchemist::CAlchemist()+0x51
085d1941 +0x5f:  mov    %eax,%ebx
085d1943 +0x61:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085d194a +0x68:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085d194f +0x6d:  cmp    %eax,%ebx
085d1951 +0x6f:  setg   %al
085d1954 +0x72:  test   %al,%al
085d1956 +0x74:  je     085d195f <+0x7d>
085d1958 +0x76:  mov    $0x0,%eax
085d195d +0x7b:  jmp    085d1973 <+0x91>
085d195f +0x7d:  addl   $0x1,-0x10(%ebp)
085d1963 +0x81:  cmpl   $0x3,-0x10(%ebp)
085d1967 +0x85:  setle  %al
085d196a +0x88:  test   %al,%al
085d196c +0x8a:  jne    085d191b <+0x39>
085d196e +0x8c:  mov    $0x1,%eax
085d1973 +0x91:  add    $0x24,%esp
085d1976 +0x94:  pop    %ebx
085d1977 +0x95:  pop    %ebp
085d1978 +0x96:  ret
```

## 反编译 C

```c
// expert_job::CAlchemist::CheckUsableStackableItem @ 0x85d18e2

/* expert_job::CAlchemist::CheckUsableStackableItem(CUser*, CItem const*) */

undefined4 expert_job::CAlchemist::CheckUsableStackableItem(CUser *param_1,CItem *param_2)

{
  int iVar1;
  CParty *this;
  CUser *this_00;
  int iVar2;
  int local_14;
  
  iVar1 = CStackableItem::get_sub_type((CStackableItem *)param_2);
  if ((iVar1 == 2) && (this = (CParty *)CUser::GetParty(param_1), this != (CParty *)0x0)) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      this_00 = (CUser *)CParty::get_user(this,local_14);
      if (this_00 != (CUser *)0x0) {
        iVar1 = CUser::GetUseAPCPotionTime(this_00);
        iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        if (iVar2 < iVar1) {
          return 0;
        }
      }
    }
  }
  return 1;
}
```
