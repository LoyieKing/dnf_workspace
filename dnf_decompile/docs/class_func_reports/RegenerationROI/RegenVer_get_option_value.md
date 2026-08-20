# RegenVer_get_option_value

`_ZN15RegenerationROI25RegenVer_get_option_valueEii`

`RegenerationROI::RegenVer_get_option_value(int, int)`

| 类 | 地址 |
|---|---|
| `RegenerationROI` | `0x085f8da6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f8da6  _ZN15RegenerationROI25RegenVer_get_option_valueEii
#           RegenerationROI::RegenVer_get_option_value(int, int)
# range [0x085f8da6, 0x085f8ec1]
085f8da6 +0x000:  push   %ebp
085f8da7 +0x001:  mov    %esp,%ebp
085f8da9 +0x003:  sub    $0x58,%esp
085f8dac +0x006:  mov    0x8(%ebp),%eax
085f8daf +0x009:  mov    0x4c(%eax),%eax
085f8db2 +0x00c:  mov    %eax,-0x24(%ebp)
085f8db5 +0x00f:  mov    0x8(%ebp),%eax
085f8db8 +0x012:  mov    (%eax),%eax
085f8dba +0x014:  lea    -0x24(%ebp),%edx
085f8dbd +0x017:  mov    %edx,0x4(%esp)
085f8dc1 +0x01b:  mov    %eax,(%esp)
085f8dc4 +0x01e:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f8dc9 +0x023:  mov    %eax,-0x1c(%ebp)
085f8dcc +0x026:  movl   $0x0,-0x18(%ebp)
085f8dd3 +0x02d:  lea    -0x30(%ebp),%eax
085f8dd6 +0x030:  mov    %eax,(%esp)
085f8dd9 +0x033:  call   085f4176 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x191>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x191
085f8dde +0x038:  movl   $0x0,-0xc(%ebp)
085f8de5 +0x03f:  jmp    085f8e45 <+0x9f>
085f8de7 +0x041:  mov    0x8(%ebp),%eax
085f8dea +0x044:  lea    0x40(%eax),%edx
085f8ded +0x047:  mov    -0xc(%ebp),%eax
085f8df0 +0x04a:  mov    %eax,0x4(%esp)
085f8df4 +0x04e:  mov    %edx,(%esp)
085f8df7 +0x051:  call   085f9a00 <_GLOBAL__I__Z16_GetRandomOptionv+0x332>  ; global constructors keyed to _GetRandomOption()+0x332
085f8dfc +0x056:  mov    0x8(%eax),%eax
085f8dff +0x059:  add    %eax,-0x18(%ebp)
085f8e02 +0x05c:  mov    -0x1c(%ebp),%eax
085f8e05 +0x05f:  cmp    -0x18(%ebp),%eax
085f8e08 +0x062:  ja     085f8e41 <+0x9b>
085f8e0a +0x064:  mov    0x8(%ebp),%eax
085f8e0d +0x067:  lea    0x40(%eax),%edx
085f8e10 +0x06a:  mov    -0xc(%ebp),%eax
085f8e13 +0x06d:  mov    %eax,0x4(%esp)
085f8e17 +0x071:  mov    %edx,(%esp)
085f8e1a +0x074:  call   085f9a00 <_GLOBAL__I__Z16_GetRandomOptionv+0x332>  ; global constructors keyed to _GetRandomOption()+0x332
085f8e1f +0x079:  mov    0x4(%eax),%eax
085f8e22 +0x07c:  mov    %eax,-0x30(%ebp)
085f8e25 +0x07f:  mov    0x8(%ebp),%eax
085f8e28 +0x082:  lea    0x40(%eax),%edx
085f8e2b +0x085:  mov    -0xc(%ebp),%eax
085f8e2e +0x088:  mov    %eax,0x4(%esp)
085f8e32 +0x08c:  mov    %edx,(%esp)
085f8e35 +0x08f:  call   085f9a00 <_GLOBAL__I__Z16_GetRandomOptionv+0x332>  ; global constructors keyed to _GetRandomOption()+0x332
085f8e3a +0x094:  mov    (%eax),%eax
085f8e3c +0x096:  mov    %eax,-0x2c(%ebp)
085f8e3f +0x099:  jmp    085f8e5d <+0xb7>
085f8e41 +0x09b:  addl   $0x1,-0xc(%ebp)
085f8e45 +0x09f:  mov    0x8(%ebp),%eax
085f8e48 +0x0a2:  add    $0x40,%eax
085f8e4b +0x0a5:  mov    %eax,(%esp)
085f8e4e +0x0a8:  call   085f99de <_GLOBAL__I__Z16_GetRandomOptionv+0x310>  ; global constructors keyed to _GetRandomOption()+0x310
085f8e53 +0x0ad:  cmp    -0xc(%ebp),%eax
085f8e56 +0x0b0:  seta   %al
085f8e59 +0x0b3:  test   %al,%al
085f8e5b +0x0b5:  jne    085f8de7 <+0x41>
085f8e5d +0x0b7:  mov    0xc(%ebp),%eax
085f8e60 +0x0ba:  mov    0x10(%ebp),%edx
085f8e63 +0x0bd:  mov    %edx,%ecx
085f8e65 +0x0bf:  sub    %eax,%ecx
085f8e67 +0x0c1:  mov    %ecx,%eax
085f8e69 +0x0c3:  mov    %eax,-0x3c(%ebp)
085f8e6c +0x0c6:  fildl  -0x3c(%ebp)
085f8e6f +0x0c9:  flds   -0x30(%ebp)
085f8e72 +0x0cc:  fmulp  %st,%st(1)
085f8e74 +0x0ce:  fnstcw -0x3e(%ebp)
085f8e77 +0x0d1:  movzwl -0x3e(%ebp),%eax
085f8e7b +0x0d5:  mov    $0xc,%ah
085f8e7d +0x0d7:  mov    %ax,-0x40(%ebp)
085f8e81 +0x0db:  fldcw  -0x40(%ebp)
085f8e84 +0x0de:  fistpl -0x14(%ebp)
085f8e87 +0x0e1:  fldcw  -0x3e(%ebp)
085f8e8a +0x0e4:  fildl  0xc(%ebp)
085f8e8d +0x0e7:  flds   -0x2c(%ebp)
085f8e90 +0x0ea:  fmulp  %st,%st(1)
085f8e92 +0x0ec:  fldcw  -0x40(%ebp)
085f8e95 +0x0ef:  fistpl -0x10(%ebp)
085f8e98 +0x0f2:  fldcw  -0x3e(%ebp)
085f8e9b +0x0f5:  mov    -0x14(%ebp),%eax
085f8e9e +0x0f8:  mov    %eax,-0x20(%ebp)
085f8ea1 +0x0fb:  mov    0x8(%ebp),%eax
085f8ea4 +0x0fe:  mov    (%eax),%eax
085f8ea6 +0x100:  lea    -0x20(%ebp),%edx
085f8ea9 +0x103:  mov    %edx,0x4(%esp)
085f8ead +0x107:  mov    %eax,(%esp)
085f8eb0 +0x10a:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f8eb5 +0x10f:  mov    -0x10(%ebp),%edx
085f8eb8 +0x112:  add    %edx,%eax
085f8eba +0x114:  mov    %eax,-0x1c(%ebp)
085f8ebd +0x117:  mov    -0x1c(%ebp),%eax
085f8ec0 +0x11a:  leave
085f8ec1 +0x11b:  ret
```

## 反编译 C

```c
// RegenerationROI::RegenVer_get_option_value @ 0x85f8da6

/* RegenerationROI::RegenVer_get_option_value(int, int) */

int __thiscall
RegenerationROI::RegenVer_get_option_value(RegenerationROI *this,int param_1,int param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float local_34;
  float local_30;
  ulong local_28;
  ulong local_24;
  uint local_20;
  uint local_1c;
  ulong local_18;
  int local_14;
  uint local_10;
  
  local_28 = *(ulong *)(this + 0x4c);
  local_20 = CMTRand::randInt(*(CMTRand **)this,&local_28);
  local_1c = 0;
  OptionValueRatio::OptionValueRatio((OptionValueRatio *)&local_34);
  local_10 = 0;
  do {
    uVar2 = std::vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>::size
                      ((vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>> *)
                       (this + 0x40));
    if (uVar2 <= local_10) {
LAB_085f8e5d:
      local_24 = (ulong)ROUND(local_34 * (float)(param_2 - param_1));
      local_14 = (int)ROUND(local_30 * (float)param_1);
      local_18 = local_24;
      iVar3 = CMTRand::randInt(*(CMTRand **)this,&local_24);
      return iVar3 + local_14;
    }
    iVar3 = std::vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>::operator[]
                      ((vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>> *)
                       (this + 0x40),local_10);
    local_1c = local_1c + *(int *)(iVar3 + 8);
    if (local_20 <= local_1c) {
      iVar3 = std::vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>::
              operator[]((vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>> *)
                         (this + 0x40),local_10);
      local_34 = *(float *)(iVar3 + 4);
      pfVar1 = (float *)std::vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>
                        ::operator[]((vector<_str_option_value_ratio,std::allocator<_str_option_value_ratio>>
                                      *)(this + 0x40),local_10);
      local_30 = *pfVar1;
      goto LAB_085f8e5d;
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
