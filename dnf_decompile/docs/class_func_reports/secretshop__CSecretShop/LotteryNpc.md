# LotteryNpc

`_ZN10secretshop11CSecretShop10LotteryNpcEiii`

`secretshop::CSecretShop::LotteryNpc(int, int, int)`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085fabac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fabac  _ZN10secretshop11CSecretShop10LotteryNpcEiii
#           secretshop::CSecretShop::LotteryNpc(int, int, int)
# range [0x085fabac, 0x085fac67]
085fabac +0x00:  push   %ebp
085fabad +0x01:  mov    %esp,%ebp
085fabaf +0x03:  sub    $0x28,%esp
085fabb2 +0x06:  movl   $0x2710,-0x10(%ebp)
085fabb9 +0x0d:  mov    0x8(%ebp),%eax
085fabbc +0x10:  mov    0x18(%eax),%eax
085fabbf +0x13:  lea    -0x10(%ebp),%edx
085fabc2 +0x16:  mov    %edx,0x4(%esp)
085fabc6 +0x1a:  mov    %eax,(%esp)
085fabc9 +0x1d:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085fabce +0x22:  mov    %eax,-0xc(%ebp)
085fabd1 +0x25:  movl   $0x3e8,-0x14(%ebp)
085fabd8 +0x2c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085fabdd +0x31:  lea    0xa700(%eax),%edx
085fabe3 +0x37:  mov    0xc(%ebp),%eax
085fabe6 +0x3a:  mov    %eax,0xc(%esp)
085fabea +0x3e:  mov    -0xc(%ebp),%eax
085fabed +0x41:  mov    %eax,0x8(%esp)
085fabf1 +0x45:  lea    -0x14(%ebp),%eax
085fabf4 +0x48:  mov    %eax,0x4(%esp)
085fabf8 +0x4c:  mov    %edx,(%esp)
085fabfb +0x4f:  call   08a828f8 <_ZN16SecretShopScript18GetNpcByDungeonIdxERiii>  ; SecretShopScript::GetNpcByDungeonIdx(int&, int, int)
085fac00 +0x54:  xor    $0x1,%eax
085fac03 +0x57:  test   %al,%al
085fac05 +0x59:  je     085fac2f <+0x83>
085fac07 +0x5b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085fac0c +0x60:  lea    0xa700(%eax),%edx
085fac12 +0x66:  mov    0x10(%ebp),%eax
085fac15 +0x69:  mov    %eax,0xc(%esp)
085fac19 +0x6d:  mov    -0xc(%ebp),%eax
085fac1c +0x70:  mov    %eax,0x8(%esp)
085fac20 +0x74:  lea    -0x14(%ebp),%eax
085fac23 +0x77:  mov    %eax,0x4(%esp)
085fac27 +0x7b:  mov    %edx,(%esp)
085fac2a +0x7e:  call   08a8293c <_ZN16SecretShopScript18GetNpcByDungeonLevERiii>  ; SecretShopScript::GetNpcByDungeonLev(int&, int, int)
085fac2f +0x83:  mov    -0x14(%ebp),%eax
085fac32 +0x86:  test   %eax,%eax
085fac34 +0x88:  je     085fac63 <+0xb7>
085fac36 +0x8a:  mov    -0x14(%ebp),%eax
085fac39 +0x8d:  cmp    $0x3e8,%eax
085fac3e +0x92:  je     085fac63 <+0xb7>
085fac40 +0x94:  mov    -0x14(%ebp),%eax
085fac43 +0x97:  mov    0x8(%ebp),%edx
085fac46 +0x9a:  lea    0x1c(%edx),%ecx
085fac49 +0x9d:  mov    0x14(%ebp),%edx
085fac4c +0xa0:  mov    %edx,0xc(%esp)
085fac50 +0xa4:  mov    0xc(%ebp),%edx
085fac53 +0xa7:  mov    %edx,0x8(%esp)
085fac57 +0xab:  mov    %eax,0x4(%esp)
085fac5b +0xaf:  mov    %ecx,(%esp)
085fac5e +0xb2:  call   085fd090 <_ZN10secretshop20CSecretShopStatistic10RecordShowEiii>  ; secretshop::CSecretShopStatistic::RecordShow(int, int, int)
085fac63 +0xb7:  mov    -0x14(%ebp),%eax
085fac66 +0xba:  leave
085fac67 +0xbb:  ret
```

## 反编译 C

```c
// secretshop::CSecretShop::LotteryNpc @ 0x85fabac

/* secretshop::CSecretShop::LotteryNpc(int, int, int) */

int __thiscall
secretshop::CSecretShop::LotteryNpc(CSecretShop *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_18 [5];
  
  local_18[1] = 10000;
  local_18[2] = CMTRand::randInt(*(CMTRand **)(this + 0x18),(ulong *)(local_18 + 1));
  local_18[0] = 1000;
  iVar2 = G_CDataManager();
  cVar1 = SecretShopScript::GetNpcByDungeonIdx((int *)(iVar2 + 0xa700),(int)local_18,local_18[2]);
  if (cVar1 != '\x01') {
    iVar2 = G_CDataManager();
    SecretShopScript::GetNpcByDungeonLev
              ((SecretShopScript *)(iVar2 + 0xa700),local_18,local_18[2],param_2);
  }
  if ((local_18[0] != 0) && (local_18[0] != 1000)) {
    CSecretShopStatistic::RecordShow
              ((CSecretShopStatistic *)(this + 0x1c),local_18[0],param_1,param_3);
  }
  return local_18[0];
}
```
