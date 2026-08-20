# get_pass_day

`_ZN13EventClassify15CEventScriptMng12get_pass_dayEii`

`EventClassify::CEventScriptMng::get_pass_day(int, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c974` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c974  _ZN13EventClassify15CEventScriptMng12get_pass_dayEii
#           EventClassify::CEventScriptMng::get_pass_day(int, int)
# range [0x0810c974, 0x0810cb2b]
0810c974 +0x000:  push   %ebp
0810c975 +0x001:  mov    %esp,%ebp
0810c977 +0x003:  push   %edi
0810c978 +0x004:  push   %ebx
0810c979 +0x005:  sub    $0x70,%esp
0810c97c +0x008:  cmpl   $0x0,0xc(%ebp)
0810c980 +0x00c:  jg     0810c992 <+0x1e>
0810c982 +0x00e:  cmpl   $0x0,0x10(%ebp)
0810c986 +0x012:  jg     0810c992 <+0x1e>
0810c988 +0x014:  mov    $0xffffffff,%eax
0810c98d +0x019:  jmp    0810cb25 <+0x1b1>
0810c992 +0x01e:  lea    -0x3c(%ebp),%ebx
0810c995 +0x021:  mov    $0x0,%eax
0810c99a +0x026:  mov    $0xb,%edx
0810c99f +0x02b:  mov    %ebx,%edi
0810c9a1 +0x02d:  mov    %edx,%ecx
0810c9a3 +0x02f:  rep stos %eax,%es:(%edi)
0810c9a5 +0x031:  mov    0xc(%ebp),%ecx
0810c9a8 +0x034:  mov    $0x68db8bad,%edx
0810c9ad +0x039:  mov    %ecx,%eax
0810c9af +0x03b:  imul   %edx
0810c9b1 +0x03d:  sar    $0xc,%edx
0810c9b4 +0x040:  mov    %ecx,%eax
0810c9b6 +0x042:  sar    $0x1f,%eax
0810c9b9 +0x045:  mov    %edx,%ecx
0810c9bb +0x047:  sub    %eax,%ecx
0810c9bd +0x049:  mov    %ecx,%eax
0810c9bf +0x04b:  sub    $0x76c,%eax
0810c9c4 +0x050:  mov    %eax,-0x28(%ebp)
0810c9c7 +0x053:  mov    0xc(%ebp),%ebx
0810c9ca +0x056:  mov    $0x68db8bad,%edx
0810c9cf +0x05b:  mov    %ebx,%eax
0810c9d1 +0x05d:  imul   %edx
0810c9d3 +0x05f:  sar    $0xc,%edx
0810c9d6 +0x062:  mov    %ebx,%eax
0810c9d8 +0x064:  sar    $0x1f,%eax
0810c9db +0x067:  mov    %edx,%ecx
0810c9dd +0x069:  sub    %eax,%ecx
0810c9df +0x06b:  imul   $0x2710,%ecx,%eax
0810c9e5 +0x071:  mov    %ebx,%ecx
0810c9e7 +0x073:  sub    %eax,%ecx
0810c9e9 +0x075:  mov    $0x51eb851f,%edx
0810c9ee +0x07a:  mov    %ecx,%eax
0810c9f0 +0x07c:  imul   %edx
0810c9f2 +0x07e:  sar    $0x5,%edx
0810c9f5 +0x081:  mov    %ecx,%eax
0810c9f7 +0x083:  sar    $0x1f,%eax
0810c9fa +0x086:  mov    %edx,%ecx
0810c9fc +0x088:  sub    %eax,%ecx
0810c9fe +0x08a:  mov    %ecx,%eax
0810ca00 +0x08c:  sub    $0x1,%eax
0810ca03 +0x08f:  mov    %eax,-0x2c(%ebp)
0810ca06 +0x092:  mov    0xc(%ebp),%ecx
0810ca09 +0x095:  mov    $0x51eb851f,%edx
0810ca0e +0x09a:  mov    %ecx,%eax
0810ca10 +0x09c:  imul   %edx
0810ca12 +0x09e:  sar    $0x5,%edx
0810ca15 +0x0a1:  mov    %ecx,%eax
0810ca17 +0x0a3:  sar    $0x1f,%eax
0810ca1a +0x0a6:  mov    %edx,%ebx
0810ca1c +0x0a8:  sub    %eax,%ebx
0810ca1e +0x0aa:  mov    %ebx,%eax
0810ca20 +0x0ac:  imul   $0x64,%eax,%eax
0810ca23 +0x0af:  mov    %ecx,%edi
0810ca25 +0x0b1:  sub    %eax,%edi
0810ca27 +0x0b3:  mov    %edi,%eax
0810ca29 +0x0b5:  mov    %eax,-0x30(%ebp)
0810ca2c +0x0b8:  movl   $0x0,-0x34(%ebp)
0810ca33 +0x0bf:  lea    -0x3c(%ebp),%eax
0810ca36 +0x0c2:  mov    %eax,(%esp)
0810ca39 +0x0c5:  call   0807e820 <_init+0x1118>
0810ca3e +0x0ca:  mov    %eax,-0x10(%ebp)
0810ca41 +0x0cd:  lea    -0x68(%ebp),%ebx
0810ca44 +0x0d0:  mov    $0x0,%eax
0810ca49 +0x0d5:  mov    $0xb,%edx
0810ca4e +0x0da:  mov    %ebx,%edi
0810ca50 +0x0dc:  mov    %edx,%ecx
0810ca52 +0x0de:  rep stos %eax,%es:(%edi)
0810ca54 +0x0e0:  mov    0x10(%ebp),%ecx
0810ca57 +0x0e3:  mov    $0x68db8bad,%edx
0810ca5c +0x0e8:  mov    %ecx,%eax
0810ca5e +0x0ea:  imul   %edx
0810ca60 +0x0ec:  sar    $0xc,%edx
0810ca63 +0x0ef:  mov    %ecx,%eax
0810ca65 +0x0f1:  sar    $0x1f,%eax
0810ca68 +0x0f4:  mov    %edx,%ecx
0810ca6a +0x0f6:  sub    %eax,%ecx
0810ca6c +0x0f8:  mov    %ecx,%eax
0810ca6e +0x0fa:  sub    $0x76c,%eax
0810ca73 +0x0ff:  mov    %eax,-0x54(%ebp)
0810ca76 +0x102:  mov    0x10(%ebp),%ebx
0810ca79 +0x105:  mov    $0x68db8bad,%edx
0810ca7e +0x10a:  mov    %ebx,%eax
0810ca80 +0x10c:  imul   %edx
0810ca82 +0x10e:  sar    $0xc,%edx
0810ca85 +0x111:  mov    %ebx,%eax
0810ca87 +0x113:  sar    $0x1f,%eax
0810ca8a +0x116:  mov    %edx,%ecx
0810ca8c +0x118:  sub    %eax,%ecx
0810ca8e +0x11a:  imul   $0x2710,%ecx,%eax
0810ca94 +0x120:  mov    %ebx,%ecx
0810ca96 +0x122:  sub    %eax,%ecx
0810ca98 +0x124:  mov    $0x51eb851f,%edx
0810ca9d +0x129:  mov    %ecx,%eax
0810ca9f +0x12b:  imul   %edx
0810caa1 +0x12d:  sar    $0x5,%edx
0810caa4 +0x130:  mov    %ecx,%eax
0810caa6 +0x132:  sar    $0x1f,%eax
0810caa9 +0x135:  mov    %edx,%ecx
0810caab +0x137:  sub    %eax,%ecx
0810caad +0x139:  mov    %ecx,%eax
0810caaf +0x13b:  sub    $0x1,%eax
0810cab2 +0x13e:  mov    %eax,-0x58(%ebp)
0810cab5 +0x141:  mov    0x10(%ebp),%ecx
0810cab8 +0x144:  mov    $0x51eb851f,%edx
0810cabd +0x149:  mov    %ecx,%eax
0810cabf +0x14b:  imul   %edx
0810cac1 +0x14d:  sar    $0x5,%edx
0810cac4 +0x150:  mov    %ecx,%eax
0810cac6 +0x152:  sar    $0x1f,%eax
0810cac9 +0x155:  mov    %edx,%ebx
0810cacb +0x157:  sub    %eax,%ebx
0810cacd +0x159:  mov    %ebx,%eax
0810cacf +0x15b:  imul   $0x64,%eax,%eax
0810cad2 +0x15e:  mov    %ecx,%edi
0810cad4 +0x160:  sub    %eax,%edi
0810cad6 +0x162:  mov    %edi,%eax
0810cad8 +0x164:  mov    %eax,-0x5c(%ebp)
0810cadb +0x167:  movl   $0x0,-0x60(%ebp)
0810cae2 +0x16e:  lea    -0x68(%ebp),%eax
0810cae5 +0x171:  mov    %eax,(%esp)
0810cae8 +0x174:  call   0807e820 <_init+0x1118>
0810caed +0x179:  mov    %eax,-0xc(%ebp)
0810caf0 +0x17c:  mov    -0xc(%ebp),%eax
0810caf3 +0x17f:  cmp    -0x10(%ebp),%eax
0810caf6 +0x182:  jl     0810cb20 <+0x1ac>
0810caf8 +0x184:  mov    -0x10(%ebp),%eax
0810cafb +0x187:  mov    -0xc(%ebp),%edx
0810cafe +0x18a:  mov    %edx,%ecx
0810cb00 +0x18c:  sub    %eax,%ecx
0810cb02 +0x18e:  mov    $0xc22e4507,%edx
0810cb07 +0x193:  mov    %ecx,%eax
0810cb09 +0x195:  imul   %edx
0810cb0b +0x197:  lea    (%edx,%ecx,1),%eax
0810cb0e +0x19a:  mov    %eax,%edx
0810cb10 +0x19c:  sar    $0x10,%edx
0810cb13 +0x19f:  mov    %ecx,%eax
0810cb15 +0x1a1:  sar    $0x1f,%eax
0810cb18 +0x1a4:  mov    %edx,%ecx
0810cb1a +0x1a6:  sub    %eax,%ecx
0810cb1c +0x1a8:  mov    %ecx,%eax
0810cb1e +0x1aa:  jmp    0810cb25 <+0x1b1>
0810cb20 +0x1ac:  mov    $0xffffffff,%eax
0810cb25 +0x1b1:  add    $0x70,%esp
0810cb28 +0x1b4:  pop    %ebx
0810cb29 +0x1b5:  pop    %edi
0810cb2a +0x1b6:  pop    %ebp
0810cb2b +0x1b7:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::get_pass_day @ 0x810c974

/* EventClassify::CEventScriptMng::get_pass_day(int, int) */

int __thiscall
EventClassify::CEventScriptMng::get_pass_day(CEventScriptMng *this,int param_1,int param_2)

{
  int iVar1;
  time_t tVar2;
  tm *ptVar3;
  byte bVar4;
  tm local_6c;
  tm local_40;
  time_t local_14;
  
  bVar4 = 0;
  if ((param_1 < 1) && (param_2 < 1)) {
    iVar1 = -1;
  }
  else {
    ptVar3 = &local_40;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      ptVar3->tm_sec = 0;
      ptVar3 = (tm *)&ptVar3->tm_min;
    }
    local_40.tm_year = param_1 / 10000 + -0x76c;
    local_40.tm_mon = (param_1 % 10000) / 100 + -1;
    local_40.tm_mday = param_1 % 100;
    local_40.tm_hour = 0;
    local_14 = mktime(&local_40);
    ptVar3 = &local_6c;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      ptVar3->tm_sec = 0;
      ptVar3 = (tm *)((int)ptVar3 + ((uint)bVar4 * -2 + 1) * 4);
    }
    local_6c.tm_year = param_2 / 10000 + -0x76c;
    local_6c.tm_mon = (param_2 % 10000) / 100 + -1;
    local_6c.tm_mday = param_2 % 100;
    local_6c.tm_hour = 0;
    tVar2 = mktime(&local_6c);
    if (tVar2 < local_14) {
      iVar1 = -1;
    }
    else {
      iVar1 = (tVar2 - local_14) / 0x15180;
    }
  }
  return iVar1;
}
```
