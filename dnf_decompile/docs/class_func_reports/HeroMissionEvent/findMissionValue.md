# findMissionValue

`_ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue`

`HeroMissionEvent::findMissionValue(CUser*, HeroMissionCondition::MissionNo::T, HeroMissionValue*&)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x08168010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08168010  _ZN16HeroMissionEvent16findMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TERP16HeroMissionValue
#           HeroMissionEvent::findMissionValue(CUser*, HeroMissionCondition::MissionNo::T, HeroMissionValue*&)
# range [0x08168010, 0x0816815e]
08168010 +0x000:  push   %ebp
08168011 +0x001:  mov    %esp,%ebp
08168013 +0x003:  sub    $0x38,%esp
08168016 +0x006:  mov    0x8(%ebp),%eax
08168019 +0x009:  mov    (%eax),%eax
0816801b +0x00b:  add    $0x34,%eax
0816801e +0x00e:  mov    (%eax),%edx
08168020 +0x010:  mov    0x8(%ebp),%eax
08168023 +0x013:  movl   $0x0,0x4(%esp)
0816802b +0x01b:  mov    %eax,(%esp)
0816802e +0x01e:  call   *%edx
08168030 +0x020:  xor    $0x1,%eax
08168033 +0x023:  test   %al,%al
08168035 +0x025:  je     08168041 <+0x31>
08168037 +0x027:  mov    $0x0,%eax
0816803c +0x02c:  jmp    0816815d <+0x14d>
08168041 +0x031:  mov    0x10(%ebp),%eax
08168044 +0x034:  test   %eax,%eax
08168046 +0x036:  jle    08168050 <+0x40>
08168048 +0x038:  mov    0x10(%ebp),%eax
0816804b +0x03b:  cmp    $0x6,%eax
0816804e +0x03e:  jle    0816805a <+0x4a>
08168050 +0x040:  mov    $0x0,%eax
08168055 +0x045:  jmp    0816815d <+0x14d>
0816805a +0x04a:  movl   $0xffffffff,0x4(%esp)
08168062 +0x052:  mov    0xc(%ebp),%eax
08168065 +0x055:  mov    %eax,(%esp)
08168068 +0x058:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0816806d +0x05d:  mov    %eax,-0x14(%ebp)
08168070 +0x060:  mov    0x8(%ebp),%eax
08168073 +0x063:  lea    0x24(%eax),%ecx
08168076 +0x066:  lea    -0x18(%ebp),%eax
08168079 +0x069:  lea    -0x14(%ebp),%edx
0816807c +0x06c:  mov    %edx,0x8(%esp)
08168080 +0x070:  mov    %ecx,0x4(%esp)
08168084 +0x074:  mov    %eax,(%esp)
08168087 +0x077:  call   081687f8 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x659>  ; global constructors keyed to HeroMissionValue::clear()+0x659
0816808c +0x07c:  sub    $0x4,%esp
0816808f +0x07f:  mov    0x8(%ebp),%eax
08168092 +0x082:  lea    0x24(%eax),%edx
08168095 +0x085:  lea    -0x10(%ebp),%eax
08168098 +0x088:  mov    %edx,0x4(%esp)
0816809c +0x08c:  mov    %eax,(%esp)
0816809f +0x08f:  call   08168824 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x685>  ; global constructors keyed to HeroMissionValue::clear()+0x685
081680a4 +0x094:  sub    $0x4,%esp
081680a7 +0x097:  lea    -0x10(%ebp),%eax
081680aa +0x09a:  mov    %eax,0x4(%esp)
081680ae +0x09e:  lea    -0x18(%ebp),%eax
081680b1 +0x0a1:  mov    %eax,(%esp)
081680b4 +0x0a4:  call   0816892c <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x78d>  ; global constructors keyed to HeroMissionValue::clear()+0x78d
081680b9 +0x0a9:  test   %al,%al
081680bb +0x0ab:  je     081680c7 <+0xb7>
081680bd +0x0ad:  mov    $0x0,%eax
081680c2 +0x0b2:  jmp    0816815d <+0x14d>
081680c7 +0x0b7:  lea    -0x18(%ebp),%eax
081680ca +0x0ba:  mov    %eax,(%esp)
081680cd +0x0bd:  call   08168940 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7a1>  ; global constructors keyed to HeroMissionValue::clear()+0x7a1
081680d2 +0x0c2:  lea    0x4(%eax),%edx
081680d5 +0x0c5:  lea    -0x1c(%ebp),%eax
081680d8 +0x0c8:  mov    %edx,0x4(%esp)
081680dc +0x0cc:  mov    %eax,(%esp)
081680df +0x0cf:  call   081684f6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x357>  ; global constructors keyed to HeroMissionValue::clear()+0x357
081680e4 +0x0d4:  sub    $0x4,%esp
081680e7 +0x0d7:  jmp    08168122 <+0x112>
081680e9 +0x0d9:  lea    -0x1c(%ebp),%eax
081680ec +0x0dc:  mov    %eax,(%esp)
081680ef +0x0df:  call   08168582 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3e3>  ; global constructors keyed to HeroMissionValue::clear()+0x3e3
081680f4 +0x0e4:  mov    (%eax),%eax
081680f6 +0x0e6:  cmp    0x10(%ebp),%eax
081680f9 +0x0e9:  sete   %al
081680fc +0x0ec:  test   %al,%al
081680fe +0x0ee:  je     08168117 <+0x107>
08168100 +0x0f0:  lea    -0x1c(%ebp),%eax
08168103 +0x0f3:  mov    %eax,(%esp)
08168106 +0x0f6:  call   08168bea <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0xa4b>  ; global constructors keyed to HeroMissionValue::clear()+0xa4b
0816810b +0x0fb:  mov    0x14(%ebp),%edx
0816810e +0x0fe:  mov    %eax,(%edx)
08168110 +0x100:  mov    $0x1,%eax
08168115 +0x105:  jmp    0816815d <+0x14d>
08168117 +0x107:  lea    -0x1c(%ebp),%eax
0816811a +0x10a:  mov    %eax,(%esp)
0816811d +0x10d:  call   0816856c <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3cd>  ; global constructors keyed to HeroMissionValue::clear()+0x3cd
08168122 +0x112:  lea    -0x18(%ebp),%eax
08168125 +0x115:  mov    %eax,(%esp)
08168128 +0x118:  call   08168940 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7a1>  ; global constructors keyed to HeroMissionValue::clear()+0x7a1
0816812d +0x11d:  lea    0x4(%eax),%edx
08168130 +0x120:  lea    -0xc(%ebp),%eax
08168133 +0x123:  mov    %edx,0x4(%esp)
08168137 +0x127:  mov    %eax,(%esp)
0816813a +0x12a:  call   0816851a <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x37b>  ; global constructors keyed to HeroMissionValue::clear()+0x37b
0816813f +0x12f:  sub    $0x4,%esp
08168142 +0x132:  lea    -0xc(%ebp),%eax
08168145 +0x135:  mov    %eax,0x4(%esp)
08168149 +0x139:  lea    -0x1c(%ebp),%eax
0816814c +0x13c:  mov    %eax,(%esp)
0816814f +0x13f:  call   08168540 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3a1>  ; global constructors keyed to HeroMissionValue::clear()+0x3a1
08168154 +0x144:  test   %al,%al
08168156 +0x146:  jne    081680e9 <+0xd9>
08168158 +0x148:  mov    $0x0,%eax
0816815d +0x14d:  leave
0816815e +0x14e:  ret
```

## 反编译 C

```c
// HeroMissionEvent::findMissionValue @ 0x8168010

/* HeroMissionEvent::findMissionValue(CUser*, HeroMissionCondition::MissionNo::T,
   HeroMissionValue*&) */

undefined4 __thiscall
HeroMissionEvent::findMissionValue
          (HeroMissionEvent *this,CUser *param_1,int param_3,undefined4 *param_4)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 uVar4;
  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_20 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_1c [4];
  undefined4 local_18;
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (((cVar1 == '\x01') && (0 < param_3)) && (param_3 < 7)) {
    local_18 = CUser::get_charac_no(param_1,-1);
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::find((uint *)local_1c);
    std::
    map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
    ::end(local_14);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
            ::operator==(local_1c,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      std::
      _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
      ::operator->(local_1c);
      std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::begin();
      while( true ) {
        std::
        _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
        ::operator->(local_1c);
        std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::end();
        bVar2 = __gnu_cxx::operator!=(local_20,local_10);
        if (!bVar2) break;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                        ::operator->(local_20);
        if (*piVar3 == param_3) {
          uVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator*(local_20);
          *param_4 = uVar4;
          return 1;
        }
        __gnu_cxx::
        __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
        ::operator++(local_20);
      }
    }
  }
  return 0;
}
```
