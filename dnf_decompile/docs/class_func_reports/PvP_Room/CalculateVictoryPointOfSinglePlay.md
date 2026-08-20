# CalculateVictoryPointOfSinglePlay

`_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi`

`PvP_Room::CalculateVictoryPointOfSinglePlay(int, bool, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085da086` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085da086  _ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi
#           PvP_Room::CalculateVictoryPointOfSinglePlay(int, bool, int)
# range [0x085da086, 0x085da1d7]
085da086 +0x000:  push   %ebp
085da087 +0x001:  mov    %esp,%ebp
085da089 +0x003:  sub    $0x48,%esp
085da08c +0x006:  mov    0x10(%ebp),%eax
085da08f +0x009:  mov    %al,-0x2c(%ebp)
085da092 +0x00c:  cmpb   $0x0,-0x2c(%ebp)
085da096 +0x010:  je     085da0a3 <+0x1d>
085da098 +0x012:  mov    0x14(%ebp),%eax
085da09b +0x015:  add    $0x1,%eax
085da09e +0x018:  jmp    085da1d6 <+0x150>
085da0a3 +0x01d:  cmpl   $0x1,0xc(%ebp)
085da0a7 +0x021:  jne    085da0c1 <+0x3b>
085da0a9 +0x023:  mov    0x14(%ebp),%eax
085da0ac +0x026:  add    $0x1,%eax
085da0af +0x029:  mov    %eax,%edx
085da0b1 +0x02b:  shr    $0x1f,%edx
085da0b4 +0x02e:  lea    (%edx,%eax,1),%eax
085da0b7 +0x031:  sar    %eax
085da0b9 +0x033:  mov    %eax,-0xc(%ebp)
085da0bc +0x036:  jmp    085da1d3 <+0x14d>
085da0c1 +0x03b:  cmpl   $0x2,0xc(%ebp)
085da0c5 +0x03f:  jne    085da0e3 <+0x5d>
085da0c7 +0x041:  mov    0x14(%ebp),%eax
085da0ca +0x044:  add    $0x1,%eax
085da0cd +0x047:  mov    %eax,%edx
085da0cf +0x049:  sar    $0x1f,%edx
085da0d2 +0x04c:  shr    $0x1e,%edx
085da0d5 +0x04f:  lea    (%edx,%eax,1),%eax
085da0d8 +0x052:  sar    $0x2,%eax
085da0db +0x055:  mov    %eax,-0xc(%ebp)
085da0de +0x058:  jmp    085da1d3 <+0x14d>
085da0e3 +0x05d:  cmpl   $0x3,0xc(%ebp)
085da0e7 +0x061:  jne    085da105 <+0x7f>
085da0e9 +0x063:  mov    0x14(%ebp),%eax
085da0ec +0x066:  add    $0x1,%eax
085da0ef +0x069:  mov    %eax,%edx
085da0f1 +0x06b:  sar    $0x1f,%edx
085da0f4 +0x06e:  shr    $0x1d,%edx
085da0f7 +0x071:  lea    (%edx,%eax,1),%eax
085da0fa +0x074:  sar    $0x3,%eax
085da0fd +0x077:  mov    %eax,-0xc(%ebp)
085da100 +0x07a:  jmp    085da1d3 <+0x14d>
085da105 +0x07f:  cmpl   $0x4,0xc(%ebp)
085da109 +0x083:  jne    085da127 <+0xa1>
085da10b +0x085:  mov    0x14(%ebp),%eax
085da10e +0x088:  add    $0x1,%eax
085da111 +0x08b:  mov    %eax,%edx
085da113 +0x08d:  sar    $0x1f,%edx
085da116 +0x090:  shr    $0x1c,%edx
085da119 +0x093:  lea    (%edx,%eax,1),%eax
085da11c +0x096:  sar    $0x4,%eax
085da11f +0x099:  mov    %eax,-0xc(%ebp)
085da122 +0x09c:  jmp    085da1d3 <+0x14d>
085da127 +0x0a1:  cmpl   $0x5,0xc(%ebp)
085da12b +0x0a5:  jne    085da149 <+0xc3>
085da12d +0x0a7:  mov    0x14(%ebp),%eax
085da130 +0x0aa:  add    $0x1,%eax
085da133 +0x0ad:  mov    %eax,%edx
085da135 +0x0af:  sar    $0x1f,%edx
085da138 +0x0b2:  shr    $0x1b,%edx
085da13b +0x0b5:  lea    (%edx,%eax,1),%eax
085da13e +0x0b8:  sar    $0x5,%eax
085da141 +0x0bb:  mov    %eax,-0xc(%ebp)
085da144 +0x0be:  jmp    085da1d3 <+0x14d>
085da149 +0x0c3:  cmpl   $0x6,0xc(%ebp)
085da14d +0x0c7:  jne    085da168 <+0xe2>
085da14f +0x0c9:  mov    0x14(%ebp),%eax
085da152 +0x0cc:  add    $0x1,%eax
085da155 +0x0cf:  mov    %eax,%edx
085da157 +0x0d1:  sar    $0x1f,%edx
085da15a +0x0d4:  shr    $0x1a,%edx
085da15d +0x0d7:  lea    (%edx,%eax,1),%eax
085da160 +0x0da:  sar    $0x6,%eax
085da163 +0x0dd:  mov    %eax,-0xc(%ebp)
085da166 +0x0e0:  jmp    085da1d3 <+0x14d>
085da168 +0x0e2:  cmpl   $0x7,0xc(%ebp)
085da16c +0x0e6:  jne    085da187 <+0x101>
085da16e +0x0e8:  mov    0x14(%ebp),%eax
085da171 +0x0eb:  add    $0x1,%eax
085da174 +0x0ee:  mov    %eax,%edx
085da176 +0x0f0:  sar    $0x1f,%edx
085da179 +0x0f3:  shr    $0x19,%edx
085da17c +0x0f6:  lea    (%edx,%eax,1),%eax
085da17f +0x0f9:  sar    $0x7,%eax
085da182 +0x0fc:  mov    %eax,-0xc(%ebp)
085da185 +0x0ff:  jmp    085da1d3 <+0x14d>
085da187 +0x101:  cmpl   $0x0,0xc(%ebp)
085da18b +0x105:  jne    085da196 <+0x110>
085da18d +0x107:  movl   $0x1,-0xc(%ebp)
085da194 +0x10e:  jmp    085da1d3 <+0x14d>
085da196 +0x110:  movl   $0x5,0xc(%esp)
085da19e +0x118:  movl   $0xb50,0x8(%esp)
085da1a6 +0x120:  movl   $&_ZZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibiE19__PRETTY_FUNCTION__,0x4(%esp)
085da1ae +0x128:  lea    -0x1c(%ebp),%eax
085da1b1 +0x12b:  mov    %eax,(%esp)
085da1b4 +0x12e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085da1b9 +0x133:  mov    0xc(%ebp),%eax
085da1bc +0x136:  mov    %eax,0x8(%esp)
085da1c0 +0x13a:  movl   $"invalid rank %d",0x4(%esp)
085da1c8 +0x142:  lea    -0x1c(%ebp),%eax
085da1cb +0x145:  mov    %eax,(%esp)
085da1ce +0x148:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085da1d3 +0x14d:  mov    -0xc(%ebp),%eax
085da1d6 +0x150:  leave
085da1d7 +0x151:  ret
```

## 反编译 C

```c
// PvP_Room::CalculateVictoryPointOfSinglePlay @ 0x85da086

/* PvP_Room::CalculateVictoryPointOfSinglePlay(int, bool, int) */

int __thiscall
PvP_Room::CalculateVictoryPointOfSinglePlay(PvP_Room *this,int param_1,bool param_2,int param_3)

{
  cMyTrace local_20 [16];
  int local_10;
  
  if (param_2) {
    local_10 = param_3 + 1;
  }
  else if (param_1 == 1) {
    local_10 = (param_3 + 1) / 2;
  }
  else if (param_1 == 2) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1e) + param_3 + 1) >> 2;
  }
  else if (param_1 == 3) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1d) + param_3 + 1) >> 3;
  }
  else if (param_1 == 4) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1c) + param_3 + 1) >> 4;
  }
  else if (param_1 == 5) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1b) + param_3 + 1) >> 5;
  }
  else if (param_1 == 6) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x1a) + param_3 + 1) >> 6;
  }
  else if (param_1 == 7) {
    local_10 = (int)(((uint)(param_3 + 1 >> 0x1f) >> 0x19) + param_3 + 1) >> 7;
  }
  else if (param_1 == 0) {
    local_10 = 1;
  }
  else {
    cMyTrace::cMyTrace(local_20,"int PvP_Room::CalculateVictoryPointOfSinglePlay(int, bool, int)",
                       0xb50,5);
    cMyTrace::operator()(local_20,"invalid rank %d",param_1);
  }
  return local_10;
}
```
