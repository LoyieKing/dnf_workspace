# LotteryItems

`_ZN10secretshop11CSecretShop12LotteryItemsERSt6vectorINS_9SALE_INFOESaIS2_EEiii`

`secretshop::CSecretShop::LotteryItems(std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085fac68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fac68  _ZN10secretshop11CSecretShop12LotteryItemsERSt6vectorINS_9SALE_INFOESaIS2_EEiii
#           secretshop::CSecretShop::LotteryItems(std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, int)
# range [0x085fac68, 0x085fad1f]
085fac68 +0x00:  push   %ebp
085fac69 +0x01:  mov    %esp,%ebp
085fac6b +0x03:  push   %esi
085fac6c +0x04:  push   %ebx
085fac6d +0x05:  sub    $0x30,%esp
085fac70 +0x08:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085fac75 +0x0d:  movl   $0x3a,0x4(%esp)
085fac7d +0x15:  mov    %eax,(%esp)
085fac80 +0x18:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085fac85 +0x1d:  mov    (%eax),%edx
085fac87 +0x1f:  add    $0x34,%edx
085fac8a +0x22:  mov    (%edx),%edx
085fac8c +0x24:  movl   $0x0,0x4(%esp)
085fac94 +0x2c:  mov    %eax,(%esp)
085fac97 +0x2f:  call   *%edx
085fac99 +0x31:  mov    %al,-0x9(%ebp)
085fac9c +0x34:  movzbl -0x9(%ebp),%esi
085faca0 +0x38:  mov    0x8(%ebp),%eax
085faca3 +0x3b:  mov    0x18(%eax),%ebx
085faca6 +0x3e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085facab +0x43:  lea    0xa700(%eax),%edx
085facb1 +0x49:  mov    %esi,0x14(%esp)
085facb5 +0x4d:  mov    0x14(%ebp),%eax
085facb8 +0x50:  mov    %eax,0x10(%esp)
085facbc +0x54:  mov    0x10(%ebp),%eax
085facbf +0x57:  mov    %eax,0xc(%esp)
085facc3 +0x5b:  mov    0xc(%ebp),%eax
085facc6 +0x5e:  mov    %eax,0x8(%esp)
085facca +0x62:  mov    %ebx,0x4(%esp)
085facce +0x66:  mov    %edx,(%esp)
085facd1 +0x69:  call   08a82a0e <_ZN16SecretShopScript19GetItemByDungeonIdxEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib>  ; SecretShopScript::GetItemByDungeonIdx(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, bool)
085facd6 +0x6e:  test   %al,%al
085facd8 +0x70:  jne    085fad18 <+0xb0>
085facda +0x72:  movzbl -0x9(%ebp),%esi
085facde +0x76:  mov    0x8(%ebp),%eax
085face1 +0x79:  mov    0x18(%eax),%ebx
085face4 +0x7c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085face9 +0x81:  lea    0xa700(%eax),%edx
085facef +0x87:  mov    %esi,0x14(%esp)
085facf3 +0x8b:  mov    0x18(%ebp),%eax
085facf6 +0x8e:  mov    %eax,0x10(%esp)
085facfa +0x92:  mov    0x10(%ebp),%eax
085facfd +0x95:  mov    %eax,0xc(%esp)
085fad01 +0x99:  mov    0xc(%ebp),%eax
085fad04 +0x9c:  mov    %eax,0x8(%esp)
085fad08 +0xa0:  mov    %ebx,0x4(%esp)
085fad0c +0xa4:  mov    %edx,(%esp)
085fad0f +0xa7:  call   08a82b34 <_ZN16SecretShopScript19GetItemByDungeonLevEP7CMTRandRSt6vectorIN10secretshop9SALE_INFOESaIS4_EEiib>  ; SecretShopScript::GetItemByDungeonLev(CMTRand*, std::vector<secretshop::SALE_INFO, std::allocator<secretshop::SALE_INFO> >&, int, int, bool)
085fad14 +0xac:  test   %al,%al
085fad16 +0xae:  jmp    085fad19 <+0xb1>
085fad18 +0xb0:  nop
085fad19 +0xb1:  add    $0x30,%esp
085fad1c +0xb4:  pop    %ebx
085fad1d +0xb5:  pop    %esi
085fad1e +0xb6:  pop    %ebp
085fad1f +0xb7:  ret
```

## 反编译 C

```c
// secretshop::CSecretShop::LotteryItems @ 0x85fac68

/* secretshop::CSecretShop::LotteryItems(std::vector<secretshop::SALE_INFO,
   std::allocator<secretshop::SALE_INFO> >&, int, int, int) */

void __thiscall
secretshop::CSecretShop::LotteryItems
          (CSecretShop *this,vector *param_1,int param_2,int param_3,int param_4)

{
  CMTRand *pCVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x3a);
  bVar2 = (bool)(**(code **)(*piVar4 + 0x34))(piVar4,0);
  pCVar1 = *(CMTRand **)(this + 0x18);
  iVar5 = G_CDataManager();
  cVar3 = SecretShopScript::GetItemByDungeonIdx
                    ((SecretShopScript *)(iVar5 + 0xa700),pCVar1,param_1,param_2,param_3,bVar2);
  if (cVar3 == '\0') {
    pCVar1 = *(CMTRand **)(this + 0x18);
    iVar5 = G_CDataManager();
    SecretShopScript::GetItemByDungeonLev
              ((SecretShopScript *)(iVar5 + 0xa700),pCVar1,param_1,param_2,param_4,bVar2);
  }
  return;
}
```
