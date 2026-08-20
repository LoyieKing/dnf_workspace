# getOptionType

`_ZN11eventReward13getOptionTypeERSsR8itemData`

`eventReward::getOptionType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, itemData&)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080ef190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ef190  _ZN11eventReward13getOptionTypeERSsR8itemData
#           eventReward::getOptionType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, itemData&)
# range [0x080ef190, 0x080ef25b]
080ef190 +0x00:  push   %ebp
080ef191 +0x01:  mov    %esp,%ebp
080ef193 +0x03:  sub    $0x28,%esp
080ef196 +0x06:  movb   $0x1,-0x9(%ebp)
080ef19a +0x0a:  movl   $"unseal",0x4(%esp)
080ef1a2 +0x12:  mov    0xc(%ebp),%eax
080ef1a5 +0x15:  mov    %eax,(%esp)
080ef1a8 +0x18:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef1ad +0x1d:  test   %al,%al
080ef1af +0x1f:  je     080ef1bd <+0x2d>
080ef1b1 +0x21:  mov    0x10(%ebp),%eax
080ef1b4 +0x24:  movb   $0x0,0x1(%eax)
080ef1b8 +0x28:  jmp    080ef256 <+0xc6>
080ef1bd +0x2d:  movl   $"seal",0x4(%esp)
080ef1c5 +0x35:  mov    0xc(%ebp),%eax
080ef1c8 +0x38:  mov    %eax,(%esp)
080ef1cb +0x3b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef1d0 +0x40:  test   %al,%al
080ef1d2 +0x42:  je     080ef1dd <+0x4d>
080ef1d4 +0x44:  mov    0x10(%ebp),%eax
080ef1d7 +0x47:  movb   $0x1,0x1(%eax)
080ef1db +0x4b:  jmp    080ef256 <+0xc6>
080ef1dd +0x4d:  movl   $"upgrade",0x4(%esp)
080ef1e5 +0x55:  mov    0xc(%ebp),%eax
080ef1e8 +0x58:  mov    %eax,(%esp)
080ef1eb +0x5b:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef1f0 +0x60:  test   %al,%al
080ef1f2 +0x62:  je     080ef218 <+0x88>
080ef1f4 +0x64:  lea    -0x9(%ebp),%eax
080ef1f7 +0x67:  mov    %eax,(%esp)
080ef1fa +0x6a:  call   088bc37b <_Z7ScanIntPb>  ; ScanInt(bool*)
080ef1ff +0x6f:  mov    %eax,%edx
080ef201 +0x71:  mov    0x10(%ebp),%eax
080ef204 +0x74:  mov    %dl,(%eax)
080ef206 +0x76:  movzbl -0x9(%ebp),%eax
080ef20a +0x7a:  xor    $0x1,%eax
080ef20d +0x7d:  test   %al,%al
080ef20f +0x7f:  je     080ef256 <+0xc6>
080ef211 +0x81:  mov    $0x0,%eax
080ef216 +0x86:  jmp    080ef25a <+0xca>
080ef218 +0x88:  movl   $"unsealROI",0x4(%esp)
080ef220 +0x90:  mov    0xc(%ebp),%eax
080ef223 +0x93:  mov    %eax,(%esp)
080ef226 +0x96:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef22b +0x9b:  test   %al,%al
080ef22d +0x9d:  je     080ef238 <+0xa8>
080ef22f +0x9f:  mov    0x10(%ebp),%eax
080ef232 +0xa2:  movb   $0x0,0x2(%eax)
080ef236 +0xa6:  jmp    080ef256 <+0xc6>
080ef238 +0xa8:  movl   $"sealROI",0x4(%esp)
080ef240 +0xb0:  mov    0xc(%ebp),%eax
080ef243 +0xb3:  mov    %eax,(%esp)
080ef246 +0xb6:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef24b +0xbb:  test   %al,%al
080ef24d +0xbd:  je     080ef256 <+0xc6>
080ef24f +0xbf:  mov    0x10(%ebp),%eax
080ef252 +0xc2:  movb   $0x1,0x2(%eax)
080ef256 +0xc6:  movzbl -0x9(%ebp),%eax
080ef25a +0xca:  leave
080ef25b +0xcb:  ret
```

## 反编译 C

```c
// eventReward::getOptionType @ 0x80ef190

/* eventReward::getOptionType(std::string&, itemData&) */

char __thiscall eventReward::getOptionType(eventReward *this,string *param_1,itemData *param_2)

{
  bool bVar1;
  itemData iVar2;
  bool local_d [9];
  
  local_d[0] = true;
  bVar1 = std::operator==(param_1,"unseal");
  if (bVar1) {
    param_2[1] = (itemData)0x0;
  }
  else {
    bVar1 = std::operator==(param_1,"seal");
    if (bVar1) {
      param_2[1] = (itemData)0x1;
    }
    else {
      bVar1 = std::operator==(param_1,"upgrade");
      if (bVar1) {
        iVar2 = (itemData)ScanInt(local_d);
        *param_2 = iVar2;
        bVar1 = local_d[0] != true;
        local_d[0] = true;
        if (bVar1) {
          local_d[0] = false;
        }
      }
      else {
        bVar1 = std::operator==(param_1,"unsealROI");
        if (bVar1) {
          param_2[2] = (itemData)0x0;
        }
        else {
          bVar1 = std::operator==(param_1,"sealROI");
          if (bVar1) {
            param_2[2] = (itemData)0x1;
          }
        }
      }
    }
  }
  return local_d[0];
}
```
