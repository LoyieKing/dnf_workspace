# is_clean

`_ZN11SlangFilter8is_cleanEPKc`

`SlangFilter::is_clean(char const*)`

| 类 | 地址 |
|---|---|
| `SlangFilter` | `0x08094ef2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08094ef2  _ZN11SlangFilter8is_cleanEPKc
#           SlangFilter::is_clean(char const*)
# range [0x08094ef2, 0x08095031]
08094ef2 +0x000:  push   %ebp
08094ef3 +0x001:  mov    %esp,%ebp
08094ef5 +0x003:  push   %edi
08094ef6 +0x004:  push   %esi
08094ef7 +0x005:  push   %ebx
08094ef8 +0x006:  sub    $0x3c,%esp
08094efb +0x009:  cmpl   $0x0,0xc(%ebp)
08094eff +0x00d:  jne    08094f0b <+0x19>
08094f01 +0x00f:  mov    $0x0,%eax
08094f06 +0x014:  jmp    0809502a <+0x138>
08094f0b +0x019:  mov    0xc(%ebp),%eax
08094f0e +0x01c:  mov    %eax,(%esp)
08094f11 +0x01f:  call   0807e3b0 <_init+0xca8>
08094f16 +0x024:  mov    %eax,-0x28(%ebp)
08094f19 +0x027:  cmpl   $0x0,-0x28(%ebp)
08094f1d +0x02b:  jne    08094f29 <+0x37>
08094f1f +0x02d:  mov    $0x0,%eax
08094f24 +0x032:  jmp    0809502a <+0x138>
08094f29 +0x037:  movl   $0xbc,(%esp)
08094f30 +0x03e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08094f35 +0x043:  mov    %eax,%ebx
08094f37 +0x045:  mov    -0x28(%ebp),%edx
08094f3a +0x048:  mov    %ebx,%eax
08094f3c +0x04a:  mov    %edx,0x8(%esp)
08094f40 +0x04e:  mov    0xc(%ebp),%edx
08094f43 +0x051:  mov    %edx,0x4(%esp)
08094f47 +0x055:  mov    %eax,(%esp)
08094f4a +0x058:  call   086de8f0 <_ZNSt10istrstreamC1EPKci>  ; std::istrstream::istrstream(char const*, int)
08094f4f +0x05d:  jmp    08094f69 <+0x77>
08094f51 +0x05f:  mov    %edx,%esi
08094f53 +0x061:  mov    %eax,%edi
08094f55 +0x063:  mov    %ebx,(%esp)
08094f58 +0x066:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08094f5d +0x06b:  mov    %edi,%eax
08094f5f +0x06d:  mov    %esi,%edx
08094f61 +0x06f:  mov    %eax,(%esp)
08094f64 +0x072:  call   08ae3750 <_Unwind_Resume>
08094f69 +0x077:  mov    %ebx,%eax
08094f6b +0x079:  mov    %eax,-0x24(%ebp)
08094f6e +0x07c:  mov    0x8(%ebp),%eax
08094f71 +0x07f:  mov    (%eax),%eax
08094f73 +0x081:  add    $0x1c,%eax
08094f76 +0x084:  mov    (%eax),%ecx
08094f78 +0x086:  mov    0x8(%ebp),%eax
08094f7b +0x089:  movl   $0x0,0x8(%esp)
08094f83 +0x091:  mov    -0x24(%ebp),%edx
08094f86 +0x094:  mov    %edx,0x4(%esp)
08094f8a +0x098:  mov    %eax,(%esp)
08094f8d +0x09b:  call   *%ecx
08094f8f +0x09d:  mov    0xc(%ebp),%eax
08094f92 +0x0a0:  mov    %eax,-0x20(%ebp)
08094f95 +0x0a3:  mov    0x8(%ebp),%eax
08094f98 +0x0a6:  mov    (%eax),%eax
08094f9a +0x0a8:  add    $0x18,%eax
08094f9d +0x0ab:  mov    (%eax),%edx
08094f9f +0x0ad:  mov    0x8(%ebp),%eax
08094fa2 +0x0b0:  mov    %eax,(%esp)
08094fa5 +0x0b3:  call   *%edx
08094fa7 +0x0b5:  mov    %eax,-0x2c(%ebp)
08094faa +0x0b8:  cmpl   $0x1,-0x2c(%ebp)
08094fae +0x0bc:  jne    08095002 <+0x110>
08094fb0 +0x0be:  mov    0xc(%ebp),%eax
08094fb3 +0x0c1:  mov    %eax,-0x1c(%ebp)
08094fb6 +0x0c4:  mov    0x8(%ebp),%eax
08094fb9 +0x0c7:  mov    %eax,(%esp)
08094fbc +0x0ca:  call   080950c6 <_GLOBAL__I__ZN11SlangFilterC2Ev+0x1c>  ; global constructors keyed to SlangFilter::SlangFilter()+0x1c
08094fc1 +0x0cf:  mov    %eax,0x4(%esp)
08094fc5 +0x0d3:  mov    -0x20(%ebp),%eax
08094fc8 +0x0d6:  mov    %eax,(%esp)
08094fcb +0x0d9:  call   0807dac0 <_init+0x3b8>
08094fd0 +0x0de:  mov    %eax,-0x20(%ebp)
08094fd3 +0x0e1:  cmpl   $0x0,-0x20(%ebp)
08094fd7 +0x0e5:  jne    08094fef <+0xfd>
08094fd9 +0x0e7:  jmp    08095002 <+0x110>
08094fdb +0x0e9:  mov    -0x1c(%ebp),%eax
08094fde +0x0ec:  cmp    -0x20(%ebp),%eax
08094fe1 +0x0ef:  jne    08094fea <+0xf8>
08094fe3 +0x0f1:  mov    $0x0,%eax
08094fe8 +0x0f6:  jmp    0809502a <+0x138>
08094fea +0x0f8:  nop
08094feb +0x0f9:  addl   $0x1,-0x1c(%ebp)
08094fef +0x0fd:  mov    -0x1c(%ebp),%eax
08094ff2 +0x100:  cmp    -0x20(%ebp),%eax
08094ff5 +0x103:  setbe  %al
08094ff8 +0x106:  test   %al,%al
08094ffa +0x108:  jne    08094fdb <+0xe9>
08094ffc +0x10a:  mov    -0x1c(%ebp),%eax
08094fff +0x10d:  mov    %eax,-0x20(%ebp)
08095002 +0x110:  cmpl   $0x2,-0x2c(%ebp)
08095006 +0x114:  setne  %al
08095009 +0x117:  test   %al,%al
0809500b +0x119:  jne    08094f95 <+0xa3>
0809500d +0x11b:  cmpl   $0x0,-0x24(%ebp)
08095011 +0x11f:  je     08095025 <+0x133>
08095013 +0x121:  mov    -0x24(%ebp),%eax
08095016 +0x124:  mov    (%eax),%eax
08095018 +0x126:  add    $0x4,%eax
0809501b +0x129:  mov    (%eax),%edx
0809501d +0x12b:  mov    -0x24(%ebp),%eax
08095020 +0x12e:  mov    %eax,(%esp)
08095023 +0x131:  call   *%edx
08095025 +0x133:  mov    $0x1,%eax
0809502a +0x138:  add    $0x3c,%esp
0809502d +0x13b:  pop    %ebx
0809502e +0x13c:  pop    %esi
0809502f +0x13d:  pop    %edi
08095030 +0x13e:  pop    %ebp
08095031 +0x13f:  ret
```

## 反编译 C

```c
// SlangFilter::is_clean @ 0x8094ef2

/* SlangFilter::is_clean(char const*) */

undefined4 __thiscall SlangFilter::is_clean(SlangFilter *this,char *param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  istrstream *this_00;
  int iVar3;
  char *pcVar4;
  char *local_24;
  char *local_20;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    sVar2 = strlen(param_1);
    if (sVar2 == 0) {
      uVar1 = 0;
    }
    else {
      this_00 = operator_new(0xbc);
                    /* try { // try from 08094f4a to 08094f4e has its CatchHandler @ 08094f51 */
      std::istrstream::istrstream(this_00,param_1,sVar2);
      (**(code **)(*(int *)this + 0x1c))(this,this_00,0);
      local_24 = param_1;
      do {
        iVar3 = (**(code **)(*(int *)this + 0x18))(this);
        if (iVar3 == 1) {
          local_20 = param_1;
          pcVar4 = (char *)FlexLexer::YYText((FlexLexer *)this);
          pcVar4 = strstr(local_24,pcVar4);
          if (pcVar4 == (char *)0x0) {
            local_24 = (char *)0x0;
          }
          else {
            for (; local_20 <= pcVar4; local_20 = local_20 + 1) {
              if (local_20 == pcVar4) {
                return 0;
              }
            }
            local_24 = local_20;
          }
        }
      } while (iVar3 != 2);
      if (this_00 != (istrstream *)0x0) {
        (**(code **)(*(int *)this_00 + 4))(this_00);
      }
      uVar1 = 1;
    }
  }
  return uVar1;
}
```
