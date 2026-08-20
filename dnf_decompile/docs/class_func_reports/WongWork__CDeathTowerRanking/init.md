# init

`_ZN8WongWork18CDeathTowerRanking4initEj`

`WongWork::CDeathTowerRanking::init(unsigned int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTowerRanking` | `0x084680a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084680a4  _ZN8WongWork18CDeathTowerRanking4initEj
#           WongWork::CDeathTowerRanking::init(unsigned int)
# range [0x084680a4, 0x0846828f]
084680a4 +0x000:  push   %ebp
084680a5 +0x001:  mov    %esp,%ebp
084680a7 +0x003:  push   %ebx
084680a8 +0x004:  sub    $0x24,%esp
084680ab +0x007:  movl   $0x0,-0x14(%ebp)
084680b2 +0x00e:  jmp    08468262 <+0x1be>
084680b7 +0x013:  movl   $0x1,-0x10(%ebp)
084680be +0x01a:  jmp    084680e6 <+0x42>
084680c0 +0x01c:  mov    -0x14(%ebp),%edx
084680c3 +0x01f:  mov    -0x10(%ebp),%ecx
084680c6 +0x022:  mov    0x8(%ebp),%eax
084680c9 +0x025:  imul   $0x98,%ecx,%ecx
084680cf +0x02b:  imul   $0x390,%edx,%edx
084680d5 +0x031:  lea    (%ecx,%edx,1),%edx
084680d8 +0x034:  add    %edx,%eax
084680da +0x036:  add    $0x90,%eax
084680df +0x03b:  movb   $0x0,(%eax)
084680e2 +0x03e:  addl   $0x1,-0x10(%ebp)
084680e6 +0x042:  cmpl   $0x5,-0x10(%ebp)
084680ea +0x046:  setle  %al
084680ed +0x049:  test   %al,%al
084680ef +0x04b:  jne    084680c0 <+0x1c>
084680f1 +0x04d:  mov    -0x14(%ebp),%eax
084680f4 +0x050:  imul   $0x390,%eax,%eax
084680fa +0x056:  add    $0x98,%eax
084680ff +0x05b:  add    0x8(%ebp),%eax
08468102 +0x05e:  add    $0x4,%eax
08468105 +0x061:  movl   $0x7,0x8(%esp)
0846810d +0x069:  movl   $"AAAAAA",0x4(%esp)
08468115 +0x071:  mov    %eax,(%esp)
08468118 +0x074:  call   0807d8a0 <_init+0x198>
0846811d +0x079:  mov    -0x14(%ebp),%eax
08468120 +0x07c:  imul   $0x390,%eax,%eax
08468126 +0x082:  add    $0x130,%eax
0846812b +0x087:  add    0x8(%ebp),%eax
0846812e +0x08a:  add    $0x4,%eax
08468131 +0x08d:  movl   $0x7,0x8(%esp)
08468139 +0x095:  movl   $"BBBBBB",0x4(%esp)
08468141 +0x09d:  mov    %eax,(%esp)
08468144 +0x0a0:  call   0807d8a0 <_init+0x198>
08468149 +0x0a5:  mov    -0x14(%ebp),%eax
0846814c +0x0a8:  imul   $0x390,%eax,%eax
08468152 +0x0ae:  add    $0x1c8,%eax
08468157 +0x0b3:  add    0x8(%ebp),%eax
0846815a +0x0b6:  add    $0x4,%eax
0846815d +0x0b9:  movl   $0x7,0x8(%esp)
08468165 +0x0c1:  movl   $"CCCCCC",0x4(%esp)
0846816d +0x0c9:  mov    %eax,(%esp)
08468170 +0x0cc:  call   0807d8a0 <_init+0x198>
08468175 +0x0d1:  mov    -0x14(%ebp),%eax
08468178 +0x0d4:  imul   $0x390,%eax,%eax
0846817e +0x0da:  add    $0x260,%eax
08468183 +0x0df:  add    0x8(%ebp),%eax
08468186 +0x0e2:  add    $0x4,%eax
08468189 +0x0e5:  movl   $0x7,0x8(%esp)
08468191 +0x0ed:  movl   $"DDDDDD",0x4(%esp)
08468199 +0x0f5:  mov    %eax,(%esp)
0846819c +0x0f8:  call   0807d8a0 <_init+0x198>
084681a1 +0x0fd:  mov    -0x14(%ebp),%eax
084681a4 +0x100:  imul   $0x390,%eax,%eax
084681aa +0x106:  add    $0x2f8,%eax
084681af +0x10b:  add    0x8(%ebp),%eax
084681b2 +0x10e:  add    $0x4,%eax
084681b5 +0x111:  movl   $0x7,0x8(%esp)
084681bd +0x119:  movl   $"EEEEEE",0x4(%esp)
084681c5 +0x121:  mov    %eax,(%esp)
084681c8 +0x124:  call   0807d8a0 <_init+0x198>
084681cd +0x129:  movl   $0x1,-0xc(%ebp)
084681d4 +0x130:  jmp    0846824f <+0x1ab>
084681d6 +0x132:  mov    -0x14(%ebp),%ecx
084681d9 +0x135:  mov    -0xc(%ebp),%ebx
084681dc +0x138:  mov    -0xc(%ebp),%eax
084681df +0x13b:  mov    0x8(%ebp),%edx
084681e2 +0x13e:  imul   $0x98,%ebx,%ebx
084681e8 +0x144:  imul   $0x390,%ecx,%ecx
084681ee +0x14a:  lea    (%ebx,%ecx,1),%ecx
084681f1 +0x14d:  add    %ecx,%edx
084681f3 +0x14f:  add    $0x94,%edx
084681f9 +0x155:  mov    %eax,(%edx)
084681fb +0x157:  mov    -0x14(%ebp),%edx
084681fe +0x15a:  mov    -0xc(%ebp),%ecx
08468201 +0x15d:  mov    0x8(%ebp),%eax
08468204 +0x160:  imul   $0x98,%ecx,%ecx
0846820a +0x166:  imul   $0x390,%edx,%edx
08468210 +0x16c:  lea    (%ecx,%edx,1),%edx
08468213 +0x16f:  add    %edx,%eax
08468215 +0x171:  add    $0x8c,%eax
0846821a +0x176:  movl   $0x0,(%eax)
08468220 +0x17c:  mov    -0x14(%ebp),%ecx
08468223 +0x17f:  mov    -0xc(%ebp),%ebx
08468226 +0x182:  mov    -0xc(%ebp),%eax
08468229 +0x185:  mov    $0xc8,%edx
0846822e +0x18a:  sub    %eax,%edx
08468230 +0x18c:  mov    0x8(%ebp),%eax
08468233 +0x18f:  imul   $0x98,%ebx,%ebx
08468239 +0x195:  imul   $0x390,%ecx,%ecx
0846823f +0x19b:  lea    (%ebx,%ecx,1),%ecx
08468242 +0x19e:  add    %ecx,%eax
08468244 +0x1a0:  add    $0x88,%eax
08468249 +0x1a5:  mov    %edx,(%eax)
0846824b +0x1a7:  addl   $0x1,-0xc(%ebp)
0846824f +0x1ab:  cmpl   $0x5,-0xc(%ebp)
08468253 +0x1af:  setle  %al
08468256 +0x1b2:  test   %al,%al
08468258 +0x1b4:  jne    084681d6 <+0x132>
0846825e +0x1ba:  addl   $0x1,-0x14(%ebp)
08468262 +0x1be:  cmpl   $0x4,-0x14(%ebp)
08468266 +0x1c2:  setle  %al
08468269 +0x1c5:  test   %al,%al
0846826b +0x1c7:  jne    084680b7 <+0x13>
08468271 +0x1cd:  mov    0x8(%ebp),%eax
08468274 +0x1d0:  mov    0xc(%ebp),%edx
08468277 +0x1d3:  mov    %edx,0x70f0(%eax)
0846827d +0x1d9:  mov    0x8(%ebp),%eax
08468280 +0x1dc:  movl   $0xc8,0x70e0(%eax)
0846828a +0x1e6:  add    $0x24,%esp
0846828d +0x1e9:  pop    %ebx
0846828e +0x1ea:  pop    %ebp
0846828f +0x1eb:  ret
```

## 反编译 C

```c
// WongWork::CDeathTowerRanking::init @ 0x84680a4

/* WongWork::CDeathTowerRanking::init(unsigned int) */

void __thiscall WongWork::CDeathTowerRanking::init(CDeathTowerRanking *this,uint param_1)

{
  int local_18;
  int local_14;
  int local_10;
  
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    for (local_14 = 1; local_14 < 6; local_14 = local_14 + 1) {
      this[local_14 * 0x98 + local_18 * 0x390 + 0x90] = (CDeathTowerRanking)0x0;
    }
    memcpy(this + local_18 * 0x390 + 0x9c,"AAAAAA",7);
    memcpy(this + local_18 * 0x390 + 0x134,"BBBBBB",7);
    memcpy(this + local_18 * 0x390 + 0x1cc,"CCCCCC",7);
    memcpy(this + local_18 * 0x390 + 0x264,"DDDDDD",7);
    memcpy(this + local_18 * 0x390 + 0x2fc,"EEEEEE",7);
    for (local_10 = 1; local_10 < 6; local_10 = local_10 + 1) {
      *(int *)(this + local_10 * 0x98 + local_18 * 0x390 + 0x94) = local_10;
      *(undefined4 *)(this + local_10 * 0x98 + local_18 * 0x390 + 0x8c) = 0;
      *(int *)(this + local_10 * 0x98 + local_18 * 0x390 + 0x88) = 200 - local_10;
    }
  }
  *(uint *)(this + 0x70f0) = param_1;
  *(undefined4 *)(this + 0x70e0) = 200;
  return;
}
```
