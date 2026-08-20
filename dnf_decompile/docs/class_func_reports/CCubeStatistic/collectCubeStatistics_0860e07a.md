# collectCubeStatistics

`_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD`

`CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD)`

| 类 | 地址 |
|---|---|
| `CCubeStatistic` | `0x0860e07a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860e07a  _ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD
#           CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD)
# range [0x0860e07a, 0x0860e0d7]
0860e07a +0x00:  push   %ebp
0860e07b +0x01:  mov    %esp,%ebp
0860e07d +0x03:  sub    $0x28,%esp
0860e080 +0x06:  cmpl   $0x0,0xc(%ebp)
0860e084 +0x0a:  je     0860e0d5 <+0x5b>
0860e086 +0x0c:  mov    0xc(%ebp),%eax
0860e089 +0x0f:  mov    %eax,(%esp)
0860e08c +0x12:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0860e091 +0x17:  mov    %eax,0x4(%esp)
0860e095 +0x1b:  mov    0x8(%ebp),%eax
0860e098 +0x1e:  mov    %eax,(%esp)
0860e09b +0x21:  call   0860de96 <_ZN14CCubeStatistic13findCubeStuffEi>  ; CCubeStatistic::findCubeStuff(int)
0860e0a0 +0x26:  test   %al,%al
0860e0a2 +0x28:  je     0860e0d6 <+0x5c>
0860e0a4 +0x2a:  mov    0xc(%ebp),%eax
0860e0a7 +0x2d:  mov    %eax,(%esp)
0860e0aa +0x30:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0860e0af +0x35:  mov    0x18(%ebp),%edx
0860e0b2 +0x38:  mov    %edx,0x10(%esp)
0860e0b6 +0x3c:  mov    0x14(%ebp),%edx
0860e0b9 +0x3f:  mov    %edx,0xc(%esp)
0860e0bd +0x43:  mov    0x10(%ebp),%edx
0860e0c0 +0x46:  mov    %edx,0x8(%esp)
0860e0c4 +0x4a:  mov    %eax,0x4(%esp)
0860e0c8 +0x4e:  mov    0x8(%ebp),%eax
0860e0cb +0x51:  mov    %eax,(%esp)
0860e0ce +0x54:  call   0860e0d8 <_ZN14CCubeStatistic17sendCubeStatisticEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::sendCubeStatistic(int, int, CUser*, CUBE_STATISTIC_FIELD)
0860e0d3 +0x59:  jmp    0860e0d6 <+0x5c>
0860e0d5 +0x5b:  nop
0860e0d6 +0x5c:  leave
0860e0d7 +0x5d:  ret
```

## 反编译 C

```c
// CCubeStatistic::collectCubeStatistics @ 0x860e07a

/* CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD) */

void __thiscall
CCubeStatistic::collectCubeStatistics
          (CCubeStatistic *this,CItem *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != (CItem *)0x0) {
    iVar2 = CItem::getItemGroupName(param_1);
    cVar1 = findCubeStuff(this,iVar2);
    if (cVar1 != '\0') {
      uVar3 = CItem::get_index(param_1);
      sendCubeStatistic(this,uVar3,param_2,param_3,param_5);
    }
  }
  return;
}
```
