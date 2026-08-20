# getRandomBuffTypeByName

`_ZN10QuickParty23getRandomBuffTypeByNameERKSs`

`QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `QuickParty` | `0x08a6e100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a6e100  _ZN10QuickParty23getRandomBuffTypeByNameERKSs
#           QuickParty::getRandomBuffTypeByName(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x08a6e100, 0x08a6e281]
08a6e100 +0x000:  push   %ebp
08a6e101 +0x001:  mov    %esp,%ebp
08a6e103 +0x003:  sub    $0x28,%esp
08a6e106 +0x006:  movl   $0xb,-0xc(%ebp)
08a6e10d +0x00d:  movl   $"[increase exp]",0x4(%esp)
08a6e115 +0x015:  mov    0x8(%ebp),%eax
08a6e118 +0x018:  mov    %eax,(%esp)
08a6e11b +0x01b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e120 +0x020:  test   %al,%al
08a6e122 +0x022:  je     08a6e130 <+0x30>
08a6e124 +0x024:  movl   $0x0,-0xc(%ebp)
08a6e12b +0x02b:  jmp    08a6e27d <+0x17d>
08a6e130 +0x030:  movl   $"[increase stats]",0x4(%esp)
08a6e138 +0x038:  mov    0x8(%ebp),%eax
08a6e13b +0x03b:  mov    %eax,(%esp)
08a6e13e +0x03e:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e143 +0x043:  test   %al,%al
08a6e145 +0x045:  je     08a6e153 <+0x53>
08a6e147 +0x047:  movl   $0x1,-0xc(%ebp)
08a6e14e +0x04e:  jmp    08a6e27d <+0x17d>
08a6e153 +0x053:  movl   $"[increase speed]",0x4(%esp)
08a6e15b +0x05b:  mov    0x8(%ebp),%eax
08a6e15e +0x05e:  mov    %eax,(%esp)
08a6e161 +0x061:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e166 +0x066:  test   %al,%al
08a6e168 +0x068:  je     08a6e176 <+0x76>
08a6e16a +0x06a:  movl   $0x2,-0xc(%ebp)
08a6e171 +0x071:  jmp    08a6e27d <+0x17d>
08a6e176 +0x076:  movl   $"[increase dropprob]",0x4(%esp)
08a6e17e +0x07e:  mov    0x8(%ebp),%eax
08a6e181 +0x081:  mov    %eax,(%esp)
08a6e184 +0x084:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e189 +0x089:  test   %al,%al
08a6e18b +0x08b:  je     08a6e199 <+0x99>
08a6e18d +0x08d:  movl   $0x3,-0xc(%ebp)
08a6e194 +0x094:  jmp    08a6e27d <+0x17d>
08a6e199 +0x099:  movl   $"[increase allattack]",0x4(%esp)
08a6e1a1 +0x0a1:  mov    0x8(%ebp),%eax
08a6e1a4 +0x0a4:  mov    %eax,(%esp)
08a6e1a7 +0x0a7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e1ac +0x0ac:  test   %al,%al
08a6e1ae +0x0ae:  je     08a6e1bc <+0xbc>
08a6e1b0 +0x0b0:  movl   $0x4,-0xc(%ebp)
08a6e1b7 +0x0b7:  jmp    08a6e27d <+0x17d>
08a6e1bc +0x0bc:  movl   $"[increase allresist]",0x4(%esp)
08a6e1c4 +0x0c4:  mov    0x8(%ebp),%eax
08a6e1c7 +0x0c7:  mov    %eax,(%esp)
08a6e1ca +0x0ca:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e1cf +0x0cf:  test   %al,%al
08a6e1d1 +0x0d1:  je     08a6e1df <+0xdf>
08a6e1d3 +0x0d3:  movl   $0x5,-0xc(%ebp)
08a6e1da +0x0da:  jmp    08a6e27d <+0x17d>
08a6e1df +0x0df:  movl   $"[increase broken]",0x4(%esp)
08a6e1e7 +0x0e7:  mov    0x8(%ebp),%eax
08a6e1ea +0x0ea:  mov    %eax,(%esp)
08a6e1ed +0x0ed:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e1f2 +0x0f2:  test   %al,%al
08a6e1f4 +0x0f4:  je     08a6e1ff <+0xff>
08a6e1f6 +0x0f6:  movl   $0x6,-0xc(%ebp)
08a6e1fd +0x0fd:  jmp    08a6e27d <+0x17d>
08a6e1ff +0x0ff:  movl   $"[increase mobhp]",0x4(%esp)
08a6e207 +0x107:  mov    0x8(%ebp),%eax
08a6e20a +0x10a:  mov    %eax,(%esp)
08a6e20d +0x10d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e212 +0x112:  test   %al,%al
08a6e214 +0x114:  je     08a6e21f <+0x11f>
08a6e216 +0x116:  movl   $0x7,-0xc(%ebp)
08a6e21d +0x11d:  jmp    08a6e27d <+0x17d>
08a6e21f +0x11f:  movl   $"[increase antidevil]",0x4(%esp)
08a6e227 +0x127:  mov    0x8(%ebp),%eax
08a6e22a +0x12a:  mov    %eax,(%esp)
08a6e22d +0x12d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e232 +0x132:  test   %al,%al
08a6e234 +0x134:  je     08a6e23f <+0x13f>
08a6e236 +0x136:  movl   $0x8,-0xc(%ebp)
08a6e23d +0x13d:  jmp    08a6e27d <+0x17d>
08a6e23f +0x13f:  movl   $"[increase coinlimit]",0x4(%esp)
08a6e247 +0x147:  mov    0x8(%ebp),%eax
08a6e24a +0x14a:  mov    %eax,(%esp)
08a6e24d +0x14d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e252 +0x152:  test   %al,%al
08a6e254 +0x154:  je     08a6e25f <+0x15f>
08a6e256 +0x156:  movl   $0x9,-0xc(%ebp)
08a6e25d +0x15d:  jmp    08a6e27d <+0x17d>
08a6e25f +0x15f:  movl   $"[return ticket]",0x4(%esp)
08a6e267 +0x167:  mov    0x8(%ebp),%eax
08a6e26a +0x16a:  mov    %eax,(%esp)
08a6e26d +0x16d:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
08a6e272 +0x172:  test   %al,%al
08a6e274 +0x174:  je     08a6e27d <+0x17d>
08a6e276 +0x176:  movl   $0xa,-0xc(%ebp)
08a6e27d +0x17d:  mov    -0xc(%ebp),%eax
08a6e280 +0x180:  leave
08a6e281 +0x181:  ret
```

## 反编译 C

```c
// QuickParty::getRandomBuffTypeByName @ 0x8a6e100

/* QuickParty::getRandomBuffTypeByName(std::string const&) */

undefined4 QuickParty::getRandomBuffTypeByName(string *param_1)

{
  bool bVar1;
  undefined4 local_10;
  
  local_10 = 0xb;
  bVar1 = std::operator==((string *)param_1,"[increase exp]");
  if (bVar1) {
    local_10 = 0;
  }
  else {
    bVar1 = std::operator==((string *)param_1,"[increase stats]");
    if (bVar1) {
      local_10 = 1;
    }
    else {
      bVar1 = std::operator==((string *)param_1,"[increase speed]");
      if (bVar1) {
        local_10 = 2;
      }
      else {
        bVar1 = std::operator==((string *)param_1,"[increase dropprob]");
        if (bVar1) {
          local_10 = 3;
        }
        else {
          bVar1 = std::operator==((string *)param_1,"[increase allattack]");
          if (bVar1) {
            local_10 = 4;
          }
          else {
            bVar1 = std::operator==((string *)param_1,"[increase allresist]");
            if (bVar1) {
              local_10 = 5;
            }
            else {
              bVar1 = std::operator==((string *)param_1,"[increase broken]");
              if (bVar1) {
                local_10 = 6;
              }
              else {
                bVar1 = std::operator==((string *)param_1,"[increase mobhp]");
                if (bVar1) {
                  local_10 = 7;
                }
                else {
                  bVar1 = std::operator==((string *)param_1,"[increase antidevil]");
                  if (bVar1) {
                    local_10 = 8;
                  }
                  else {
                    bVar1 = std::operator==((string *)param_1,"[increase coinlimit]");
                    if (bVar1) {
                      local_10 = 9;
                    }
                    else {
                      bVar1 = std::operator==((string *)param_1,"[return ticket]");
                      if (bVar1) {
                        local_10 = 10;
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
  return local_10;
}
```
