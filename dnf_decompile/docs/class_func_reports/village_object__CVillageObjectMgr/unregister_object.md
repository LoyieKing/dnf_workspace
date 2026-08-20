# unregister_object

`_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE`

`village_object::CVillageObjectMgr::unregister_object(village_object::Zone, village_object::IObject*)`

| 类 | 地址 |
|---|---|
| `village_object::CVillageObjectMgr` | `0x086b70d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b70d0  _ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE
#           village_object::CVillageObjectMgr::unregister_object(village_object::Zone, village_object::IObject*)
# range [0x086b70d0, 0x086b71d9]
086b70d0 +0x000:  push   %ebp
086b70d1 +0x001:  mov    %esp,%ebp
086b70d3 +0x003:  sub    $0x38,%esp
086b70d6 +0x006:  mov    0x8(%ebp),%edx
086b70d9 +0x009:  lea    -0x24(%ebp),%eax
086b70dc +0x00c:  lea    0xc(%ebp),%ecx
086b70df +0x00f:  mov    %ecx,0x8(%esp)
086b70e3 +0x013:  mov    %edx,0x4(%esp)
086b70e7 +0x017:  mov    %eax,(%esp)
086b70ea +0x01a:  call   086b7564 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x135>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x135
086b70ef +0x01f:  sub    $0x4,%esp
086b70f2 +0x022:  mov    0x8(%ebp),%edx
086b70f5 +0x025:  lea    -0x20(%ebp),%eax
086b70f8 +0x028:  mov    %edx,0x4(%esp)
086b70fc +0x02c:  mov    %eax,(%esp)
086b70ff +0x02f:  call   086b7590 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x161>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x161
086b7104 +0x034:  sub    $0x4,%esp
086b7107 +0x037:  lea    -0x20(%ebp),%eax
086b710a +0x03a:  mov    %eax,0x4(%esp)
086b710e +0x03e:  lea    -0x24(%ebp),%eax
086b7111 +0x041:  mov    %eax,(%esp)
086b7114 +0x044:  call   086b77c8 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x399>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x399
086b7119 +0x049:  test   %al,%al
086b711b +0x04b:  je     086b7127 <+0x57>
086b711d +0x04d:  mov    $0x0,%eax
086b7122 +0x052:  jmp    086b71d8 <+0x108>
086b7127 +0x057:  lea    -0x24(%ebp),%eax
086b712a +0x05a:  mov    %eax,(%esp)
086b712d +0x05d:  call   086b75ca <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x19b>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x19b
086b7132 +0x062:  add    $0x4,%eax
086b7135 +0x065:  mov    %eax,-0xc(%ebp)
086b7138 +0x068:  lea    -0x1c(%ebp),%eax
086b713b +0x06b:  mov    -0xc(%ebp),%edx
086b713e +0x06e:  mov    %edx,0x4(%esp)
086b7142 +0x072:  mov    %eax,(%esp)
086b7145 +0x075:  call   086b7802 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x3d3>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x3d3
086b714a +0x07a:  sub    $0x4,%esp
086b714d +0x07d:  lea    -0x18(%ebp),%eax
086b7150 +0x080:  mov    -0xc(%ebp),%edx
086b7153 +0x083:  mov    %edx,0x4(%esp)
086b7157 +0x087:  mov    %eax,(%esp)
086b715a +0x08a:  call   086b77dc <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x3ad>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x3ad
086b715f +0x08f:  sub    $0x4,%esp
086b7162 +0x092:  lea    -0x28(%ebp),%eax
086b7165 +0x095:  lea    0x10(%ebp),%edx
086b7168 +0x098:  mov    %edx,0xc(%esp)
086b716c +0x09c:  mov    -0x1c(%ebp),%edx
086b716f +0x09f:  mov    %edx,0x8(%esp)
086b7173 +0x0a3:  mov    -0x18(%ebp),%edx
086b7176 +0x0a6:  mov    %edx,0x4(%esp)
086b717a +0x0aa:  mov    %eax,(%esp)
086b717d +0x0ad:  call   086b7825 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x3f6>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x3f6
086b7182 +0x0b2:  sub    $0x4,%esp
086b7185 +0x0b5:  lea    -0x14(%ebp),%eax
086b7188 +0x0b8:  mov    -0xc(%ebp),%edx
086b718b +0x0bb:  mov    %edx,0x4(%esp)
086b718f +0x0bf:  mov    %eax,(%esp)
086b7192 +0x0c2:  call   086b7802 <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x3d3>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x3d3
086b7197 +0x0c7:  sub    $0x4,%esp
086b719a +0x0ca:  lea    -0x14(%ebp),%eax
086b719d +0x0cd:  mov    %eax,0x4(%esp)
086b71a1 +0x0d1:  lea    -0x28(%ebp),%eax
086b71a4 +0x0d4:  mov    %eax,(%esp)
086b71a7 +0x0d7:  call   086b787a <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x44b>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x44b
086b71ac +0x0dc:  test   %al,%al
086b71ae +0x0de:  je     086b71b7 <+0xe7>
086b71b0 +0x0e0:  mov    $0x0,%eax
086b71b5 +0x0e5:  jmp    086b71d8 <+0x108>
086b71b7 +0x0e7:  lea    -0x10(%ebp),%eax
086b71ba +0x0ea:  mov    -0x28(%ebp),%edx
086b71bd +0x0ed:  mov    %edx,0x8(%esp)
086b71c1 +0x0f1:  mov    -0xc(%ebp),%edx
086b71c4 +0x0f4:  mov    %edx,0x4(%esp)
086b71c8 +0x0f8:  mov    %eax,(%esp)
086b71cb +0x0fb:  call   086b788e <_GLOBAL__I__ZN14village_object17CVillageObjectMgrC2Ev+0x45f>  ; global constructors keyed to village_object::CVillageObjectMgr::CVillageObjectMgr()+0x45f
086b71d0 +0x100:  sub    $0x4,%esp
086b71d3 +0x103:  mov    $0x1,%eax
086b71d8 +0x108:  leave
086b71d9 +0x109:  ret
```

## 反编译 C

```c
// village_object::CVillageObjectMgr::unregister_object @ 0x86b70d0

/* village_object::CVillageObjectMgr::unregister_object(village_object::Zone,
   village_object::IObject*) */

undefined4 village_object::CVillageObjectMgr::unregister_object(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  Zone local_28 [4];
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  _List_iterator local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::find(local_28);
  std::
  map<village_object::Zone,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>,std::less<village_object::Zone>,std::allocator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>>
  ::end(local_24);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
          ::operator==((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                        *)local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    local_10 = std::
               _Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
               ::operator->((_Rb_tree_iterator<std::pair<village_object::Zone_const,std::list<village_object::IObject*,std::allocator<village_object::IObject*>>>>
                             *)local_28);
    local_10 = local_10 + 4;
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::end();
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::begin();
    std::find<std::_List_iterator<village_object::IObject*>,village_object::IObject*>
              (&local_2c,local_1c,local_20,&stack0x0000000c);
    std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::end();
    cVar1 = std::_List_iterator<village_object::IObject*>::operator==
                      ((_List_iterator<village_object::IObject*> *)&local_2c,local_18);
    if (cVar1 == '\0') {
      std::list<village_object::IObject*,std::allocator<village_object::IObject*>>::erase
                (local_14,local_10,local_2c);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
