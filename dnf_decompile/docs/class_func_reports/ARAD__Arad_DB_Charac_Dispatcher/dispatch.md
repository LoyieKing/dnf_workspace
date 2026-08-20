# dispatch

`_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream`

`ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DB_Charac_Dispatcher` | `0x08184114` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184114  _ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream
#           ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*)
# range [0x08184114, 0x0818428f]
08184114 +0x000:  push   %ebp
08184115 +0x001:  mov    %esp,%ebp
08184117 +0x003:  sub    $0x38,%esp
0818411a +0x006:  mov    0x14(%ebp),%eax
0818411d +0x009:  mov    %eax,(%esp)
08184120 +0x00c:  call   08184854 <_GLOBAL__I__ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x1c>  ; global constructors keyed to ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*)+0x1c
08184125 +0x011:  mov    %eax,-0xc(%ebp)
08184128 +0x014:  cmpl   $0x0,-0xc(%ebp)
0818412c +0x018:  jne    0818416c <+0x58>
0818412e +0x01a:  movl   $"Context Null",0x14(%esp)
08184136 +0x022:  movl   $"%s",0x10(%esp)
0818413e +0x02a:  movl   $0x18,0xc(%esp)
08184146 +0x032:  movl   $&_ZZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0818414e +0x03a:  movl   $"localjapan/Arad_Character.cpp",0x4(%esp)
08184156 +0x042:  movl   $0x1,(%esp)
0818415d +0x049:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08184162 +0x04e:  mov    $0xffffffff,%eax
08184167 +0x053:  jmp    0818428d <+0x179>
0818416c +0x058:  mov    -0xc(%ebp),%eax
0818416f +0x05b:  mov    %eax,0x4(%esp)
08184173 +0x05f:  mov    0x8(%ebp),%eax
08184176 +0x062:  mov    %eax,(%esp)
08184179 +0x065:  call   08184290 <_ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC>  ; ARAD::Arad_DB_Charac_Dispatcher::create_charac(SIG_CREATE_CHARAC*)
0818417e +0x06a:  test   %eax,%eax
08184180 +0x06c:  setne  %al
08184183 +0x06f:  test   %al,%al
08184185 +0x071:  je     08184191 <+0x7d>
08184187 +0x073:  mov    $0xffffffff,%eax
0818418c +0x078:  jmp    0818428d <+0x179>
08184191 +0x07d:  mov    -0xc(%ebp),%eax
08184194 +0x080:  mov    %eax,0x4(%esp)
08184198 +0x084:  mov    0x8(%ebp),%eax
0818419b +0x087:  mov    %eax,(%esp)
0818419e +0x08a:  call   08184342 <_ZN4ARAD25Arad_DB_Charac_Dispatcher18create_charac_statEP17SIG_CREATE_CHARAC>  ; ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat(SIG_CREATE_CHARAC*)
081841a3 +0x08f:  test   %eax,%eax
081841a5 +0x091:  setne  %al
081841a8 +0x094:  test   %al,%al
081841aa +0x096:  je     081841b6 <+0xa2>
081841ac +0x098:  mov    $0xffffffff,%eax
081841b1 +0x09d:  jmp    0818428d <+0x179>
081841b6 +0x0a2:  mov    -0xc(%ebp),%eax
081841b9 +0x0a5:  mov    %eax,0x4(%esp)
081841bd +0x0a9:  mov    0x8(%ebp),%eax
081841c0 +0x0ac:  mov    %eax,(%esp)
081841c3 +0x0af:  call   081843d2 <_ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC>  ; ARAD::Arad_DB_Charac_Dispatcher::create_inventory(SIG_CREATE_CHARAC*)
081841c8 +0x0b4:  test   %eax,%eax
081841ca +0x0b6:  setne  %al
081841cd +0x0b9:  test   %al,%al
081841cf +0x0bb:  je     081841db <+0xc7>
081841d1 +0x0bd:  mov    $0xffffffff,%eax
081841d6 +0x0c2:  jmp    0818428d <+0x179>
081841db +0x0c7:  mov    -0xc(%ebp),%eax
081841de +0x0ca:  mov    %eax,0x4(%esp)
081841e2 +0x0ce:  mov    0x8(%ebp),%eax
081841e5 +0x0d1:  mov    %eax,(%esp)
081841e8 +0x0d4:  call   08184484 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC>  ; ARAD::Arad_DB_Charac_Dispatcher::create_equip(SIG_CREATE_CHARAC*)
081841ed +0x0d9:  test   %eax,%eax
081841ef +0x0db:  setne  %al
081841f2 +0x0de:  test   %al,%al
081841f4 +0x0e0:  je     08184200 <+0xec>
081841f6 +0x0e2:  mov    $0xffffffff,%eax
081841fb +0x0e7:  jmp    0818428d <+0x179>
08184200 +0x0ec:  mov    -0xc(%ebp),%eax
08184203 +0x0ef:  mov    %eax,0x4(%esp)
08184207 +0x0f3:  mov    0x8(%ebp),%eax
0818420a +0x0f6:  mov    %eax,(%esp)
0818420d +0x0f9:  call   08184528 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_skillEP17SIG_CREATE_CHARAC>  ; ARAD::Arad_DB_Charac_Dispatcher::create_skill(SIG_CREATE_CHARAC*)
08184212 +0x0fe:  test   %eax,%eax
08184214 +0x100:  setne  %al
08184217 +0x103:  test   %al,%al
08184219 +0x105:  je     08184222 <+0x10e>
0818421b +0x107:  mov    $0xffffffff,%eax
08184220 +0x10c:  jmp    0818428d <+0x179>
08184222 +0x10e:  mov    -0xc(%ebp),%eax
08184225 +0x111:  mov    %eax,0x4(%esp)
08184229 +0x115:  mov    0x8(%ebp),%eax
0818422c +0x118:  mov    %eax,(%esp)
0818422f +0x11b:  call   081845b8 <_ZN4ARAD25Arad_DB_Charac_Dispatcher10create_pvpEP17SIG_CREATE_CHARAC>  ; ARAD::Arad_DB_Charac_Dispatcher::create_pvp(SIG_CREATE_CHARAC*)
08184234 +0x120:  test   %eax,%eax
08184236 +0x122:  setne  %al
08184239 +0x125:  test   %al,%al
0818423b +0x127:  je     08184244 <+0x130>
0818423d +0x129:  mov    $0xffffffff,%eax
08184242 +0x12e:  jmp    0818428d <+0x179>
08184244 +0x130:  mov    -0xc(%ebp),%eax
08184247 +0x133:  mov    %eax,0x4(%esp)
0818424b +0x137:  mov    0x8(%ebp),%eax
0818424e +0x13a:  mov    %eax,(%esp)
08184251 +0x13d:  call   08184648 <_ZN4ARAD25Arad_DB_Charac_Dispatcher21create_charac_dungeonEP17SIG_CREATE_CHARAC>  ; ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon(SIG_CREATE_CHARAC*)
08184256 +0x142:  test   %eax,%eax
08184258 +0x144:  setne  %al
0818425b +0x147:  test   %al,%al
0818425d +0x149:  je     08184266 <+0x152>
0818425f +0x14b:  mov    $0xffffffff,%eax
08184264 +0x150:  jmp    0818428d <+0x179>
08184266 +0x152:  mov    -0xc(%ebp),%eax
08184269 +0x155:  mov    %eax,0x4(%esp)
0818426d +0x159:  mov    0x8(%ebp),%eax
08184270 +0x15c:  mov    %eax,(%esp)
08184273 +0x15f:  call   081846d8 <_ZN4ARAD25Arad_DB_Charac_Dispatcher19create_charac_questEP17SIG_CREATE_CHARAC>  ; ARAD::Arad_DB_Charac_Dispatcher::create_charac_quest(SIG_CREATE_CHARAC*)
08184278 +0x164:  test   %eax,%eax
0818427a +0x166:  setne  %al
0818427d +0x169:  test   %al,%al
0818427f +0x16b:  je     08184288 <+0x174>
08184281 +0x16d:  mov    $0xffffffff,%eax
08184286 +0x172:  jmp    0818428d <+0x179>
08184288 +0x174:  mov    $0x0,%eax
0818428d +0x179:  leave
0818428e +0x17a:  ret
0818428f +0x17b:  nop
```

## 反编译 C

```c
// ARAD::Arad_DB_Charac_Dispatcher::dispatch @ 0x8184114

/* ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::dispatch
          (Arad_DB_Charac_Dispatcher *this,int param_1,int param_2,Stream *param_3)

{
  SIG_CREATE_CHARAC *pSVar1;
  undefined4 uVar2;
  int iVar3;
  
  pSVar1 = Stream::GetOutBuffer<SIG_CREATE_CHARAC>(param_3);
  if (pSVar1 == (SIG_CREATE_CHARAC *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "virtual int ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*)",0x18,"%s",
               "Context Null");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = create_charac(this,pSVar1);
    if (iVar3 == 0) {
      iVar3 = create_charac_stat(this,pSVar1);
      if (iVar3 == 0) {
        iVar3 = create_inventory(this,pSVar1);
        if (iVar3 == 0) {
          iVar3 = create_equip(this,pSVar1);
          if (iVar3 == 0) {
            iVar3 = create_skill(this,pSVar1);
            if (iVar3 == 0) {
              iVar3 = create_pvp(this,pSVar1);
              if (iVar3 == 0) {
                iVar3 = create_charac_dungeon(this,pSVar1);
                if (iVar3 == 0) {
                  iVar3 = create_charac_quest(this,pSVar1);
                  if (iVar3 == 0) {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 0xffffffff;
                  }
                }
                else {
                  uVar2 = 0xffffffff;
                }
              }
              else {
                uVar2 = 0xffffffff;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
