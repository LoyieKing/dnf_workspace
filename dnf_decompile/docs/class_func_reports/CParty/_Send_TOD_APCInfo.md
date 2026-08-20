# _Send_TOD_APCInfo

`_ZN6CParty17_Send_TOD_APCInfoEi`

`CParty::_Send_TOD_APCInfo(int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085bac26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085bac26  _ZN6CParty17_Send_TOD_APCInfoEi
#           CParty::_Send_TOD_APCInfo(int)
# range [0x085bac26, 0x085bacbf]
085bac26 +0x00:  push   %ebp
085bac27 +0x01:  mov    %esp,%ebp
085bac29 +0x03:  sub    $0x28,%esp
085bac2c +0x06:  mov    0x8(%ebp),%eax
085bac2f +0x09:  mov    0xcac(%eax),%eax
085bac35 +0x0f:  mov    %eax,(%esp)
085bac38 +0x12:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
085bac3d +0x17:  test   %al,%al
085bac3f +0x19:  je     085bacb9 <+0x93>
085bac41 +0x1b:  mov    &_ZN10GlobalData20s_pTowerOfDespairMgrE,%eax
085bac46 +0x20:  mov    %eax,-0xc(%ebp)
085bac49 +0x23:  movl   $0x0,0x4(%esp)
085bac51 +0x2b:  lea    -0xe(%ebp),%eax
085bac54 +0x2e:  mov    %eax,(%esp)
085bac57 +0x31:  call   085fe7b4 <_ZN9TOD_LayerC1Et>  ; TOD_Layer::TOD_Layer(unsigned short)
085bac5c +0x36:  mov    0x8(%ebp),%eax
085bac5f +0x39:  mov    %eax,(%esp)
085bac62 +0x3c:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085bac67 +0x41:  mov    %eax,0x8(%esp)
085bac6b +0x45:  lea    -0xe(%ebp),%eax
085bac6e +0x48:  mov    %eax,0x4(%esp)
085bac72 +0x4c:  mov    -0xc(%ebp),%eax
085bac75 +0x4f:  mov    %eax,(%esp)
085bac78 +0x52:  call   08644338 <_ZN17TowerOfDespairMgr11SendAPCInfoERK9TOD_LayerP5CUser>  ; TowerOfDespairMgr::SendAPCInfo(TOD_Layer const&, CUser*)
085bac7d +0x57:  cmpl   $0xffffffff,0xc(%ebp)
085bac81 +0x5b:  je     085bacb9 <+0x93>
085bac83 +0x5d:  mov    0xc(%ebp),%eax
085bac86 +0x60:  movzwl %ax,%eax
085bac89 +0x63:  mov    %eax,0x4(%esp)
085bac8d +0x67:  lea    -0x10(%ebp),%eax
085bac90 +0x6a:  mov    %eax,(%esp)
085bac93 +0x6d:  call   085fe7b4 <_ZN9TOD_LayerC1Et>  ; TOD_Layer::TOD_Layer(unsigned short)
085bac98 +0x72:  mov    0x8(%ebp),%eax
085bac9b +0x75:  mov    %eax,(%esp)
085bac9e +0x78:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085baca3 +0x7d:  mov    %eax,0x8(%esp)
085baca7 +0x81:  lea    -0x10(%ebp),%eax
085bacaa +0x84:  mov    %eax,0x4(%esp)
085bacae +0x88:  mov    -0xc(%ebp),%eax
085bacb1 +0x8b:  mov    %eax,(%esp)
085bacb4 +0x8e:  call   08644338 <_ZN17TowerOfDespairMgr11SendAPCInfoERK9TOD_LayerP5CUser>  ; TowerOfDespairMgr::SendAPCInfo(TOD_Layer const&, CUser*)
085bacb9 +0x93:  mov    $0x1,%eax
085bacbe +0x98:  leave
085bacbf +0x99:  ret
```

## 反编译 C

```c
// CParty::_Send_TOD_APCInfo @ 0x85bac26

/* CParty::_Send_TOD_APCInfo(int) */

undefined4 __thiscall CParty::_Send_TOD_APCInfo(CParty *this,int param_1)

{
  char cVar1;
  CUser *pCVar2;
  TOD_Layer local_14 [2];
  TOD_Layer local_12 [2];
  TowerOfDespairMgr *local_10;
  
  cVar1 = CDungeon::isTowerOfDespairDungeon(*(CDungeon **)(this + 0xcac));
  if (cVar1 != '\0') {
    local_10 = GlobalData::s_pTowerOfDespairMgr;
    TOD_Layer::TOD_Layer(local_12,0);
    pCVar2 = (CUser *)getManager(this);
    TowerOfDespairMgr::SendAPCInfo(local_10,local_12,pCVar2);
    if (param_1 != -1) {
      TOD_Layer::TOD_Layer(local_14,(ushort)param_1);
      pCVar2 = (CUser *)getManager(this);
      TowerOfDespairMgr::SendAPCInfo(local_10,local_14,pCVar2);
    }
  }
  return 1;
}
```
