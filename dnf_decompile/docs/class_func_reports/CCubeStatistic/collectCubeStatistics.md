# collectCubeStatistics

`_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD`

`CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)`

| 类 | 地址 |
|---|---|
| `CCubeStatistic` | `0x0860dfb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860dfb8  _ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD
#           CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
# range [0x0860dfb8, 0x0860e079]
0860dfb8 +0x00:  push   %ebp
0860dfb9 +0x01:  mov    %esp,%ebp
0860dfbb +0x03:  push   %ebx
0860dfbc +0x04:  sub    $0x34,%esp
0860dfbf +0x07:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0860dfc4 +0x0c:  mov    0xc(%ebp),%edx
0860dfc7 +0x0f:  mov    %edx,0x4(%esp)
0860dfcb +0x13:  mov    %eax,(%esp)
0860dfce +0x16:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0860dfd3 +0x1b:  mov    %eax,-0xc(%ebp)
0860dfd6 +0x1e:  cmpl   $0x0,-0xc(%ebp)
0860dfda +0x22:  je     0860e072 <+0xba>
0860dfe0 +0x28:  mov    -0xc(%ebp),%eax
0860dfe3 +0x2b:  mov    %eax,(%esp)
0860dfe6 +0x2e:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0860dfeb +0x33:  mov    %eax,0x4(%esp)
0860dfef +0x37:  mov    0x8(%ebp),%eax
0860dff2 +0x3a:  mov    %eax,(%esp)
0860dff5 +0x3d:  call   0860de96 <_ZN14CCubeStatistic13findCubeStuffEi>  ; CCubeStatistic::findCubeStuff(int)
0860dffa +0x42:  test   %al,%al
0860dffc +0x44:  je     0860e025 <+0x6d>
0860dffe +0x46:  mov    0x18(%ebp),%eax
0860e001 +0x49:  mov    %eax,0x10(%esp)
0860e005 +0x4d:  mov    0x14(%ebp),%eax
0860e008 +0x50:  mov    %eax,0xc(%esp)
0860e00c +0x54:  mov    0x10(%ebp),%eax
0860e00f +0x57:  mov    %eax,0x8(%esp)
0860e013 +0x5b:  mov    0xc(%ebp),%eax
0860e016 +0x5e:  mov    %eax,0x4(%esp)
0860e01a +0x62:  mov    0x8(%ebp),%eax
0860e01d +0x65:  mov    %eax,(%esp)
0860e020 +0x68:  call   0860e0d8 <_ZN14CCubeStatistic17sendCubeStatisticEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::sendCubeStatistic(int, int, CUser*, CUBE_STATISTIC_FIELD)
0860e025 +0x6d:  mov    -0xc(%ebp),%eax
0860e028 +0x70:  mov    %eax,(%esp)
0860e02b +0x73:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0860e030 +0x78:  mov    %eax,%ebx
0860e032 +0x7a:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
0860e037 +0x7f:  mov    %ebx,0x4(%esp)
0860e03b +0x83:  mov    %eax,(%esp)
0860e03e +0x86:  call   0860de96 <_ZN14CCubeStatistic13findCubeStuffEi>  ; CCubeStatistic::findCubeStuff(int)
0860e043 +0x8b:  test   %al,%al
0860e045 +0x8d:  je     0860e073 <+0xbb>
0860e047 +0x8f:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
0860e04c +0x94:  mov    0x18(%ebp),%edx
0860e04f +0x97:  mov    %edx,0x10(%esp)
0860e053 +0x9b:  mov    0x14(%ebp),%edx
0860e056 +0x9e:  mov    %edx,0xc(%esp)
0860e05a +0xa2:  mov    0x10(%ebp),%edx
0860e05d +0xa5:  mov    %edx,0x8(%esp)
0860e061 +0xa9:  mov    0xc(%ebp),%edx
0860e064 +0xac:  mov    %edx,0x4(%esp)
0860e068 +0xb0:  mov    %eax,(%esp)
0860e06b +0xb3:  call   0860e0d8 <_ZN14CCubeStatistic17sendCubeStatisticEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::sendCubeStatistic(int, int, CUser*, CUBE_STATISTIC_FIELD)
0860e070 +0xb8:  jmp    0860e073 <+0xbb>
0860e072 +0xba:  nop
0860e073 +0xbb:  add    $0x34,%esp
0860e076 +0xbe:  pop    %ebx
0860e077 +0xbf:  pop    %ebp
0860e078 +0xc0:  ret
0860e079 +0xc1:  nop
```

## 反编译 C

```c
// CCubeStatistic::collectCubeStatistics @ 0x860dfb8

/* CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD) */

void __thiscall
CCubeStatistic::collectCubeStatistics
          (CCubeStatistic *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_5
          )

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  int iVar2;
  CCubeStatistic *pCVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 != (CItem *)0x0) {
    iVar2 = CItem::getItemGroupName(this_01);
    cVar1 = findCubeStuff(this,iVar2);
    if (cVar1 != '\0') {
      sendCubeStatistic(this,param_1,param_2,param_3,param_5);
    }
    iVar2 = CItem::getItemGroupName(this_01);
    pCVar3 = (CCubeStatistic *)GetInstanceCubeStatistic();
    cVar1 = findCubeStuff(pCVar3,iVar2);
    if (cVar1 != '\0') {
      pCVar3 = (CCubeStatistic *)GetInstanceCubeStatistic();
      sendCubeStatistic(pCVar3,param_1,param_2,param_3,param_5);
    }
  }
  return;
}
```
