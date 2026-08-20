# Load

`_ZN25LevelupSupportEventManger4LoadEv`

`LevelupSupportEventManger::Load()`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x08146e3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08146e3c  _ZN25LevelupSupportEventManger4LoadEv
#           LevelupSupportEventManger::Load()
# range [0x08146e3c, 0x08146fd9]
08146e3c +0x000:  push   %ebp
08146e3d +0x001:  mov    %esp,%ebp
08146e3f +0x003:  push   %ebx
08146e40 +0x004:  sub    $0x64,%esp
08146e43 +0x007:  movl   $0x0,0x14(%esp)
08146e4b +0x00f:  movl   $0x1,0x10(%esp)
08146e53 +0x017:  movl   $0x9,0xc(%esp)
08146e5b +0x01f:  movl   $0x18,0x8(%esp)
08146e63 +0x027:  movl   $&_ZZN25LevelupSupportEventManger4LoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
08146e6b +0x02f:  lea    -0x38(%ebp),%eax
08146e6e +0x032:  mov    %eax,(%esp)
08146e71 +0x035:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
08146e76 +0x03a:  movl   $"\t- Loading Levelup Support Event script - ",0x4(%esp)
08146e7e +0x042:  lea    -0x38(%ebp),%eax
08146e81 +0x045:  mov    %eax,(%esp)
08146e84 +0x048:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08146e89 +0x04d:  mov    0x8(%ebp),%eax
08146e8c +0x050:  add    $0x4,%eax
08146e8f +0x053:  mov    %eax,(%esp)
08146e92 +0x056:  call   08147bce <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0xc1>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0xc1
08146e97 +0x05b:  mov    0x8(%ebp),%eax
08146e9a +0x05e:  add    $0x4,%eax
08146e9d +0x061:  mov    %eax,(%esp)
08146ea0 +0x064:  call   08ab514c <_ZN20LevelupSupportSciprt10loadScriptEv>  ; LevelupSupportSciprt::loadScript()
08146ea5 +0x069:  test   %eax,%eax
08146ea7 +0x06b:  sete   %al
08146eaa +0x06e:  test   %al,%al
08146eac +0x070:  je     08146fc9 <+0x18d>
08146eb2 +0x076:  mov    0x8(%ebp),%eax
08146eb5 +0x079:  add    $0x1c,%eax
08146eb8 +0x07c:  mov    %eax,(%esp)
08146ebb +0x07f:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
08146ec0 +0x084:  mov    0x8(%ebp),%eax
08146ec3 +0x087:  add    $0x34,%eax
08146ec6 +0x08a:  mov    %eax,(%esp)
08146ec9 +0x08d:  call   08147be2 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0xd5>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0xd5
08146ece +0x092:  mov    0x8(%ebp),%eax
08146ed1 +0x095:  lea    0x4(%eax),%edx
08146ed4 +0x098:  lea    -0x3c(%ebp),%eax
08146ed7 +0x09b:  mov    %edx,0x4(%esp)
08146edb +0x09f:  mov    %eax,(%esp)
08146ede +0x0a2:  call   08147bfe <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0xf1>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0xf1
08146ee3 +0x0a7:  sub    $0x4,%esp
08146ee6 +0x0aa:  mov    0x8(%ebp),%eax
08146ee9 +0x0ad:  lea    0x4(%eax),%edx
08146eec +0x0b0:  lea    -0x40(%ebp),%eax
08146eef +0x0b3:  mov    %edx,0x4(%esp)
08146ef3 +0x0b7:  mov    %eax,(%esp)
08146ef6 +0x0ba:  call   08147c24 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x117>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x117
08146efb +0x0bf:  sub    $0x4,%esp
08146efe +0x0c2:  movl   $0x0,-0xc(%ebp)
08146f05 +0x0c9:  jmp    08146fad <+0x171>
08146f0a +0x0ce:  mov    -0xc(%ebp),%eax
08146f0d +0x0d1:  mov    %eax,-0x18(%ebp)
08146f10 +0x0d4:  lea    -0x18(%ebp),%ebx
08146f13 +0x0d7:  addl   $0x1,-0xc(%ebp)
08146f17 +0x0db:  lea    -0x3c(%ebp),%eax
08146f1a +0x0de:  mov    %eax,(%esp)
08146f1d +0x0e1:  call   08147c5e <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x151>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x151
08146f22 +0x0e6:  mov    %ebx,0x8(%esp)
08146f26 +0x0ea:  mov    %eax,0x4(%esp)
08146f2a +0x0ee:  lea    -0x20(%ebp),%eax
08146f2d +0x0f1:  mov    %eax,(%esp)
08146f30 +0x0f4:  call   08147c6c <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x15f>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x15f
08146f35 +0x0f9:  mov    0x8(%ebp),%eax
08146f38 +0x0fc:  lea    0x1c(%eax),%ecx
08146f3b +0x0ff:  lea    -0x28(%ebp),%eax
08146f3e +0x102:  lea    -0x20(%ebp),%edx
08146f41 +0x105:  mov    %edx,0x8(%esp)
08146f45 +0x109:  mov    %ecx,0x4(%esp)
08146f49 +0x10d:  mov    %eax,(%esp)
08146f4c +0x110:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08146f51 +0x115:  sub    $0x4,%esp
08146f54 +0x118:  lea    -0x3c(%ebp),%eax
08146f57 +0x11b:  mov    %eax,(%esp)
08146f5a +0x11e:  call   08147c5e <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x151>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x151
08146f5f +0x123:  mov    (%eax),%eax
08146f61 +0x125:  movzwl %ax,%eax
08146f64 +0x128:  movl   $0x0,0x8(%esp)
08146f6c +0x130:  mov    %eax,0x4(%esp)
08146f70 +0x134:  lea    -0x14(%ebp),%eax
08146f73 +0x137:  mov    %eax,(%esp)
08146f76 +0x13a:  call   08147b2a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x1d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x1d
08146f7b +0x13f:  mov    0x8(%ebp),%eax
08146f7e +0x142:  lea    0x34(%eax),%edx
08146f81 +0x145:  lea    -0x14(%ebp),%eax
08146f84 +0x148:  mov    %eax,0x4(%esp)
08146f88 +0x14c:  mov    %edx,(%esp)
08146f8b +0x14f:  call   08147c9a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x18d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x18d
08146f90 +0x154:  lea    -0x10(%ebp),%eax
08146f93 +0x157:  movl   $0x0,0x8(%esp)
08146f9b +0x15f:  lea    -0x3c(%ebp),%edx
08146f9e +0x162:  mov    %edx,0x4(%esp)
08146fa2 +0x166:  mov    %eax,(%esp)
08146fa5 +0x169:  call   08147cbc <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x1af>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x1af
08146faa +0x16e:  sub    $0x4,%esp
08146fad +0x171:  lea    -0x40(%ebp),%eax
08146fb0 +0x174:  mov    %eax,0x4(%esp)
08146fb4 +0x178:  lea    -0x3c(%ebp),%eax
08146fb7 +0x17b:  mov    %eax,(%esp)
08146fba +0x17e:  call   08147c4a <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x13d>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x13d
08146fbf +0x183:  test   %al,%al
08146fc1 +0x185:  jne    08146f0a <+0xce>
08146fc7 +0x18b:  jmp    08146fd0 <+0x194>
08146fc9 +0x18d:  mov    $0x0,%eax
08146fce +0x192:  jmp    08146fd5 <+0x199>
08146fd0 +0x194:  mov    $0x1,%eax
08146fd5 +0x199:  mov    -0x4(%ebp),%ebx
08146fd8 +0x19c:  leave
08146fd9 +0x19d:  ret
```

## 反编译 C

```c
// LevelupSupportEventManger::Load @ 0x8146e3c

/* LevelupSupportEventManger::Load() */

undefined4 __thiscall LevelupSupportEventManger::Load(LevelupSupportEventManger *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_44 [4];
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_40 [4];
  cMyTrace local_3c [16];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c;
  EventInfo local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
  local_14 [4];
  int local_10;
  
  cMyTrace::cMyTrace(local_3c,"virtual bool LevelupSupportEventManger::Load()",0x18,9,true,false);
  cMyTrace::operator()(local_3c,"\t- Loading Levelup Support Event script - ");
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::clear((map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
           *)(this + 4));
  iVar2 = LevelupSupportSciprt::loadScript();
  if (iVar2 == 0) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c)
              );
    std::
    vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
    ::clear((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             *)(this + 0x34));
    std::
    map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
    ::begin(local_40);
    std::
    map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
    ::end(local_44);
    local_10 = 0;
    while( true ) {
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
              ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                            *)local_40,(_Rb_tree_iterator *)local_44);
      if (cVar1 == '\0') break;
      local_1c = local_10;
      local_10 = local_10 + 1;
      piVar3 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                                    *)local_40);
      std::pair<int_const,int>::pair<int_const&,int>(local_24,piVar3,&local_1c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
      puVar4 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
               ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                             *)local_40);
      EventInfo::EventInfo(local_18,(ushort)*puVar4,0);
      std::
      vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
      ::push_back((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                   *)(this + 0x34),local_18);
      std::
      _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
      ::operator++(local_14,(int)local_40);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
