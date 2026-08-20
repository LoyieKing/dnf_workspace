# IncreaseMessage

`_ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx`

`message_counter::CMessageCounter::IncreaseMessage(unsigned int, unsigned char, unsigned short, long long)`

| 类 | 地址 |
|---|---|
| `message_counter::CMessageCounter` | `0x0856f9c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856f9c4  _ZN15message_counter15CMessageCounter15IncreaseMessageEjhtx
#           message_counter::CMessageCounter::IncreaseMessage(unsigned int, unsigned char, unsigned short, long long)
# range [0x0856f9c4, 0x0856fbaf]
0856f9c4 +0x000:  push   %ebp
0856f9c5 +0x001:  mov    %esp,%ebp
0856f9c7 +0x003:  push   %ebx
0856f9c8 +0x004:  sub    $0xb4,%esp
0856f9ce +0x00a:  mov    0x10(%ebp),%edx
0856f9d1 +0x00d:  mov    0x14(%ebp),%eax
0856f9d4 +0x010:  mov    %dl,-0x8c(%ebp)
0856f9da +0x016:  mov    %ax,-0x90(%ebp)
0856f9e1 +0x01d:  mov    0x18(%ebp),%eax
0856f9e4 +0x020:  mov    %eax,-0x98(%ebp)
0856f9ea +0x026:  mov    0x1c(%ebp),%eax
0856f9ed +0x029:  mov    %eax,-0x94(%ebp)
0856f9f3 +0x02f:  movzwl -0x90(%ebp),%ecx
0856f9fa +0x036:  movzbl -0x8c(%ebp),%edx
0856fa01 +0x03d:  mov    0xc(%ebp),%eax
0856fa04 +0x040:  mov    %ecx,0xc(%esp)
0856fa08 +0x044:  mov    %edx,0x8(%esp)
0856fa0c +0x048:  mov    %eax,0x4(%esp)
0856fa10 +0x04c:  lea    -0x64(%ebp),%eax
0856fa13 +0x04f:  mov    %eax,(%esp)
0856fa16 +0x052:  call   08570204 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0xa5>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0xa5
0856fa1b +0x057:  mov    0x8(%ebp),%edx
0856fa1e +0x05a:  lea    -0x68(%ebp),%eax
0856fa21 +0x05d:  lea    -0x64(%ebp),%ecx
0856fa24 +0x060:  mov    %ecx,0x8(%esp)
0856fa28 +0x064:  mov    %edx,0x4(%esp)
0856fa2c +0x068:  mov    %eax,(%esp)
0856fa2f +0x06b:  call   085702f0 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x191>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x191
0856fa34 +0x070:  sub    $0x4,%esp
0856fa37 +0x073:  fldz
0856fa39 +0x075:  fstpl  -0x18(%ebp)
0856fa3c +0x078:  fldz
0856fa3e +0x07a:  fstpl  -0x10(%ebp)
0856fa41 +0x07d:  mov    0x8(%ebp),%edx
0856fa44 +0x080:  lea    -0x5c(%ebp),%eax
0856fa47 +0x083:  mov    %edx,0x4(%esp)
0856fa4b +0x087:  mov    %eax,(%esp)
0856fa4e +0x08a:  call   0857031c <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1bd>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1bd
0856fa53 +0x08f:  sub    $0x4,%esp
0856fa56 +0x092:  lea    -0x5c(%ebp),%eax
0856fa59 +0x095:  mov    %eax,0x4(%esp)
0856fa5d +0x099:  lea    -0x68(%ebp),%eax
0856fa60 +0x09c:  mov    %eax,(%esp)
0856fa63 +0x09f:  call   08570342 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1e3>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1e3
0856fa68 +0x0a4:  test   %al,%al
0856fa6a +0x0a6:  je     0856fb3e <+0x17a>
0856fa70 +0x0ac:  lea    -0x68(%ebp),%eax
0856fa73 +0x0af:  mov    %eax,(%esp)
0856fa76 +0x0b2:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fa7b +0x0b7:  mov    0x8(%eax),%edx
0856fa7e +0x0ba:  add    $0x1,%edx
0856fa81 +0x0bd:  mov    %edx,0x8(%eax)
0856fa84 +0x0c0:  lea    -0x68(%ebp),%eax
0856fa87 +0x0c3:  mov    %eax,(%esp)
0856fa8a +0x0c6:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fa8f +0x0cb:  mov    %eax,%ecx
0856fa91 +0x0cd:  mov    0xc(%ecx),%eax
0856fa94 +0x0d0:  mov    0x10(%ecx),%edx
0856fa97 +0x0d3:  add    -0x98(%ebp),%eax
0856fa9d +0x0d9:  adc    -0x94(%ebp),%edx
0856faa3 +0x0df:  mov    %eax,0xc(%ecx)
0856faa6 +0x0e2:  mov    %edx,0x10(%ecx)
0856faa9 +0x0e5:  lea    -0x68(%ebp),%eax
0856faac +0x0e8:  mov    %eax,(%esp)
0856faaf +0x0eb:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fab4 +0x0f0:  mov    0x8(%eax),%eax
0856fab7 +0x0f3:  sub    $0x1,%eax
0856faba +0x0f6:  mov    %eax,-0x9c(%ebp)
0856fac0 +0x0fc:  fildl  -0x9c(%ebp)
0856fac6 +0x102:  fstpl  -0xa8(%ebp)
0856facc +0x108:  lea    -0x68(%ebp),%eax
0856facf +0x10b:  mov    %eax,(%esp)
0856fad2 +0x10e:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fad7 +0x113:  mov    0x8(%eax),%eax
0856fada +0x116:  mov    %eax,-0x9c(%ebp)
0856fae0 +0x11c:  fildl  -0x9c(%ebp)
0856fae6 +0x122:  fdivrl -0xa8(%ebp)
0856faec +0x128:  fstpl  -0x18(%ebp)
0856faef +0x12b:  lea    -0x68(%ebp),%eax
0856faf2 +0x12e:  mov    %eax,(%esp)
0856faf5 +0x131:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fafa +0x136:  mov    0x8(%eax),%eax
0856fafd +0x139:  mov    %eax,-0x9c(%ebp)
0856fb03 +0x13f:  fildl  -0x9c(%ebp)
0856fb09 +0x145:  fld1
0856fb0b +0x147:  fdivp  %st,%st(1)
0856fb0d +0x149:  fstpl  -0x10(%ebp)
0856fb10 +0x14c:  lea    -0x68(%ebp),%eax
0856fb13 +0x14f:  mov    %eax,(%esp)
0856fb16 +0x152:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fb1b +0x157:  mov    %eax,%ebx
0856fb1d +0x159:  lea    -0x68(%ebp),%eax
0856fb20 +0x15c:  mov    %eax,(%esp)
0856fb23 +0x15f:  call   08570356 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x1f7>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x1f7
0856fb28 +0x164:  fldl   0x14(%eax)
0856fb2b +0x167:  fmull  -0x18(%ebp)
0856fb2e +0x16a:  fildll -0x98(%ebp)
0856fb34 +0x170:  fmull  -0x10(%ebp)
0856fb37 +0x173:  faddp  %st,%st(1)
0856fb39 +0x175:  fstpl  0x14(%ebx)
0856fb3c +0x178:  jmp    0856fbaa <+0x1e6>
0856fb3e +0x17a:  movl   $0x1,-0x7c(%ebp)
0856fb45 +0x181:  mov    -0x98(%ebp),%eax
0856fb4b +0x187:  mov    -0x94(%ebp),%edx
0856fb51 +0x18d:  mov    %eax,-0x78(%ebp)
0856fb54 +0x190:  mov    %edx,-0x74(%ebp)
0856fb57 +0x193:  fildll -0x98(%ebp)
0856fb5d +0x199:  fstpl  -0x70(%ebp)
0856fb60 +0x19c:  lea    -0x34(%ebp),%eax
0856fb63 +0x19f:  lea    -0x7c(%ebp),%edx
0856fb66 +0x1a2:  mov    %edx,0x8(%esp)
0856fb6a +0x1a6:  lea    -0x64(%ebp),%edx
0856fb6d +0x1a9:  mov    %edx,0x4(%esp)
0856fb71 +0x1ad:  mov    %eax,(%esp)
0856fb74 +0x1b0:  call   08570363 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x204>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x204
0856fb79 +0x1b5:  sub    $0x4,%esp
0856fb7c +0x1b8:  lea    -0x34(%ebp),%eax
0856fb7f +0x1bb:  mov    %eax,0x4(%esp)
0856fb83 +0x1bf:  lea    -0x50(%ebp),%eax
0856fb86 +0x1c2:  mov    %eax,(%esp)
0856fb89 +0x1c5:  call   085703a2 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x243>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x243
0856fb8e +0x1ca:  mov    0x8(%ebp),%edx
0856fb91 +0x1cd:  lea    -0x58(%ebp),%eax
0856fb94 +0x1d0:  lea    -0x50(%ebp),%ecx
0856fb97 +0x1d3:  mov    %ecx,0x8(%esp)
0856fb9b +0x1d7:  mov    %edx,0x4(%esp)
0856fb9f +0x1db:  mov    %eax,(%esp)
0856fba2 +0x1de:  call   085703f6 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x297>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x297
0856fba7 +0x1e3:  sub    $0x4,%esp
0856fbaa +0x1e6:  mov    -0x4(%ebp),%ebx
0856fbad +0x1e9:  leave
0856fbae +0x1ea:  ret
0856fbaf +0x1eb:  nop
```

## 反编译 C

```c
// message_counter::CMessageCounter::IncreaseMessage @ 0x856f9c4

/* message_counter::CMessageCounter::IncreaseMessage(unsigned int, unsigned char, unsigned short,
   long long) */

void message_counter::CMessageCounter::IncreaseMessage
               (uint param_1,uchar param_2,ushort param_3,longlong param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined3 in_stack_00000009;
  int in_stack_00000018;
  MessageKey local_6c [4];
  MessageKey local_68 [8];
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  local_60 [4];
  pair local_5c [8];
  pair<message_counter::MessageKey_const,message_counter::MessageValue> local_54 [28];
  MessageKey local_38 [28];
  double local_1c;
  double local_14;
  
  MessageKey::MessageKey(local_68,_param_2,(uchar)param_3,(ushort)param_4);
  std::
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  ::find(local_6c);
  local_1c = 0.0;
  local_14 = 0.0;
  std::
  map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
  ::end(local_60);
  cVar2 = std::
          _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
          ::operator!=((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                        *)local_6c,(_Rb_tree_iterator *)local_60);
  if (cVar2 == '\0') {
    std::make_pair<message_counter::MessageKey&,message_counter::MessageValue&>
              (local_38,(MessageValue *)local_68);
    std::pair<message_counter::MessageKey_const,message_counter::MessageValue>::
    pair<message_counter::MessageKey,message_counter::MessageValue>(local_54,local_38);
    std::
    map<message_counter::MessageKey,message_counter::MessageValue,std::less<message_counter::MessageKey>,std::allocator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>>
    ::insert(local_5c);
  }
  else {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    uVar1 = *(uint *)(iVar3 + 0xc);
    *(uint *)(iVar3 + 0xc) = uVar1 + param_4._4_4_;
    *(uint *)(iVar3 + 0x10) =
         *(int *)(iVar3 + 0x10) + in_stack_00000018 + (uint)CARRY4(uVar1,param_4._4_4_);
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    iVar3 = *(int *)(iVar3 + 8);
    iVar4 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    local_1c = (double)(iVar3 + -1) / (double)*(int *)(iVar4 + 8);
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    local_14 = 1.0 / (double)*(int *)(iVar3 + 8);
    iVar3 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    iVar4 = std::
            _Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
            ::operator->((_Rb_tree_iterator<std::pair<message_counter::MessageKey_const,message_counter::MessageValue>>
                          *)local_6c);
    *(double *)(iVar3 + 0x14) =
         (double)CONCAT44(in_stack_00000018,param_4._4_4_) * local_14 +
         *(double *)(iVar4 + 0x14) * local_1c;
  }
  return;
}
```
