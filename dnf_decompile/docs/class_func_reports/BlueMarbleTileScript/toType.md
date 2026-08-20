# toType

`_ZN20BlueMarbleTileScript6toTypeESs`

`BlueMarbleTileScript::toType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `BlueMarbleTileScript` | `0x088d520a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d520a  _ZN20BlueMarbleTileScript6toTypeESs
#           BlueMarbleTileScript::toType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x088d520a, 0x088d53d5]
088d520a +0x000:  push   %ebp
088d520b +0x001:  mov    %esp,%ebp
088d520d +0x003:  sub    $0x18,%esp
088d5210 +0x006:  movl   $"empty",0x4(%esp)
088d5218 +0x00e:  mov    0xc(%ebp),%eax
088d521b +0x011:  mov    %eax,(%esp)
088d521e +0x014:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5223 +0x019:  test   %al,%al
088d5225 +0x01b:  je     088d5231 <+0x27>
088d5227 +0x01d:  mov    $0x0,%eax
088d522c +0x022:  jmp    088d53d4 <+0x1ca>
088d5231 +0x027:  movl   $"start",0x4(%esp)
088d5239 +0x02f:  mov    0xc(%ebp),%eax
088d523c +0x032:  mov    %eax,(%esp)
088d523f +0x035:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5244 +0x03a:  test   %al,%al
088d5246 +0x03c:  je     088d5252 <+0x48>
088d5248 +0x03e:  mov    $0x1,%eax
088d524d +0x043:  jmp    088d53d4 <+0x1ca>
088d5252 +0x048:  movl   $"end",0x4(%esp)
088d525a +0x050:  mov    0xc(%ebp),%eax
088d525d +0x053:  mov    %eax,(%esp)
088d5260 +0x056:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5265 +0x05b:  test   %al,%al
088d5267 +0x05d:  je     088d5273 <+0x69>
088d5269 +0x05f:  mov    $0x2,%eax
088d526e +0x064:  jmp    088d53d4 <+0x1ca>
088d5273 +0x069:  movl   $"gold",0x4(%esp)
088d527b +0x071:  mov    0xc(%ebp),%eax
088d527e +0x074:  mov    %eax,(%esp)
088d5281 +0x077:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5286 +0x07c:  test   %al,%al
088d5288 +0x07e:  je     088d5294 <+0x8a>
088d528a +0x080:  mov    $0x3,%eax
088d528f +0x085:  jmp    088d53d4 <+0x1ca>
088d5294 +0x08a:  movl   $"exp",0x4(%esp)
088d529c +0x092:  mov    0xc(%ebp),%eax
088d529f +0x095:  mov    %eax,(%esp)
088d52a2 +0x098:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d52a7 +0x09d:  test   %al,%al
088d52a9 +0x09f:  je     088d52b5 <+0xab>
088d52ab +0x0a1:  mov    $0x4,%eax
088d52b0 +0x0a6:  jmp    088d53d4 <+0x1ca>
088d52b5 +0x0ab:  movl   $"drop",0x4(%esp)
088d52bd +0x0b3:  mov    0xc(%ebp),%eax
088d52c0 +0x0b6:  mov    %eax,(%esp)
088d52c3 +0x0b9:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d52c8 +0x0be:  test   %al,%al
088d52ca +0x0c0:  je     088d52d6 <+0xcc>
088d52cc +0x0c2:  mov    $0x5,%eax
088d52d1 +0x0c7:  jmp    088d53d4 <+0x1ca>
088d52d6 +0x0cc:  movl   $"item",0x4(%esp)
088d52de +0x0d4:  mov    0xc(%ebp),%eax
088d52e1 +0x0d7:  mov    %eax,(%esp)
088d52e4 +0x0da:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d52e9 +0x0df:  test   %al,%al
088d52eb +0x0e1:  je     088d52f7 <+0xed>
088d52ed +0x0e3:  mov    $0x6,%eax
088d52f2 +0x0e8:  jmp    088d53d4 <+0x1ca>
088d52f7 +0x0ed:  movl   $"unique item",0x4(%esp)
088d52ff +0x0f5:  mov    0xc(%ebp),%eax
088d5302 +0x0f8:  mov    %eax,(%esp)
088d5305 +0x0fb:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d530a +0x100:  test   %al,%al
088d530c +0x102:  je     088d5318 <+0x10e>
088d530e +0x104:  mov    $0x7,%eax
088d5313 +0x109:  jmp    088d53d4 <+0x1ca>
088d5318 +0x10e:  movl   $"boss unique",0x4(%esp)
088d5320 +0x116:  mov    0xc(%ebp),%eax
088d5323 +0x119:  mov    %eax,(%esp)
088d5326 +0x11c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d532b +0x121:  test   %al,%al
088d532d +0x123:  je     088d5339 <+0x12f>
088d532f +0x125:  mov    $0x8,%eax
088d5334 +0x12a:  jmp    088d53d4 <+0x1ca>
088d5339 +0x12f:  movl   $"move",0x4(%esp)
088d5341 +0x137:  mov    0xc(%ebp),%eax
088d5344 +0x13a:  mov    %eax,(%esp)
088d5347 +0x13d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d534c +0x142:  test   %al,%al
088d534e +0x144:  je     088d5357 <+0x14d>
088d5350 +0x146:  mov    $0x9,%eax
088d5355 +0x14b:  jmp    088d53d4 <+0x1ca>
088d5357 +0x14d:  movl   $"jump",0x4(%esp)
088d535f +0x155:  mov    0xc(%ebp),%eax
088d5362 +0x158:  mov    %eax,(%esp)
088d5365 +0x15b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d536a +0x160:  test   %al,%al
088d536c +0x162:  je     088d5375 <+0x16b>
088d536e +0x164:  mov    $0xa,%eax
088d5373 +0x169:  jmp    088d53d4 <+0x1ca>
088d5375 +0x16b:  movl   $"gold goblin",0x4(%esp)
088d537d +0x173:  mov    0xc(%ebp),%eax
088d5380 +0x176:  mov    %eax,(%esp)
088d5383 +0x179:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d5388 +0x17e:  test   %al,%al
088d538a +0x180:  je     088d5393 <+0x189>
088d538c +0x182:  mov    $0xb,%eax
088d5391 +0x187:  jmp    088d53d4 <+0x1ca>
088d5393 +0x189:  movl   $"rope",0x4(%esp)
088d539b +0x191:  mov    0xc(%ebp),%eax
088d539e +0x194:  mov    %eax,(%esp)
088d53a1 +0x197:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d53a6 +0x19c:  test   %al,%al
088d53a8 +0x19e:  je     088d53b1 <+0x1a7>
088d53aa +0x1a0:  mov    $0xc,%eax
088d53af +0x1a5:  jmp    088d53d4 <+0x1ca>
088d53b1 +0x1a7:  movl   $"kick",0x4(%esp)
088d53b9 +0x1af:  mov    0xc(%ebp),%eax
088d53bc +0x1b2:  mov    %eax,(%esp)
088d53bf +0x1b5:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
088d53c4 +0x1ba:  test   %al,%al
088d53c6 +0x1bc:  je     088d53cf <+0x1c5>
088d53c8 +0x1be:  mov    $0xd,%eax
088d53cd +0x1c3:  jmp    088d53d4 <+0x1ca>
088d53cf +0x1c5:  mov    $0x0,%eax
088d53d4 +0x1ca:  leave
088d53d5 +0x1cb:  ret
```

## 反编译 C

```c
// BlueMarbleTileScript::toType @ 0x88d520a

/* BlueMarbleTileScript::toType(std::string) */

undefined4 __thiscall BlueMarbleTileScript::toType(undefined4 this,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_2,"empty");
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    bVar1 = std::operator==(param_2,"start");
    if (bVar1) {
      uVar2 = 1;
    }
    else {
      bVar1 = std::operator==(param_2,"end");
      if (bVar1) {
        uVar2 = 2;
      }
      else {
        bVar1 = std::operator==(param_2,"gold");
        if (bVar1) {
          uVar2 = 3;
        }
        else {
          bVar1 = std::operator==(param_2,"exp");
          if (bVar1) {
            uVar2 = 4;
          }
          else {
            bVar1 = std::operator==(param_2,"drop");
            if (bVar1) {
              uVar2 = 5;
            }
            else {
              bVar1 = std::operator==(param_2,"item");
              if (bVar1) {
                uVar2 = 6;
              }
              else {
                bVar1 = std::operator==(param_2,"unique item");
                if (bVar1) {
                  uVar2 = 7;
                }
                else {
                  bVar1 = std::operator==(param_2,"boss unique");
                  if (bVar1) {
                    uVar2 = 8;
                  }
                  else {
                    bVar1 = std::operator==(param_2,"move");
                    if (bVar1) {
                      uVar2 = 9;
                    }
                    else {
                      bVar1 = std::operator==(param_2,"jump");
                      if (bVar1) {
                        uVar2 = 10;
                      }
                      else {
                        bVar1 = std::operator==(param_2,"gold goblin");
                        if (bVar1) {
                          uVar2 = 0xb;
                        }
                        else {
                          bVar1 = std::operator==(param_2,"rope");
                          if (bVar1) {
                            uVar2 = 0xc;
                          }
                          else {
                            bVar1 = std::operator==(param_2,"kick");
                            if (bVar1) {
                              uVar2 = 0xd;
                            }
                            else {
                              uVar2 = 0;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}
```
