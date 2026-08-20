# GrowthEquipEvent

`_GLOBAL__I__ZN16GrowthEquipEventC2Ev`

`global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to GrowthEquipEvent` | `0x080f7803` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f7803  _GLOBAL__I__ZN16GrowthEquipEventC2Ev
#           global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()
# range [0x080f7803, 0x080f79ab]
080f7803 +0x000:  push   %ebp
080f7804 +0x001:  mov    %esp,%ebp
080f7806 +0x003:  sub    $0x18,%esp
080f7809 +0x006:  movl   $0xffff,0x4(%esp)
080f7811 +0x00e:  movl   $0x1,(%esp)
080f7818 +0x015:  call   080f77c3 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
080f781d +0x01a:  leave
080f781e +0x01b:  ret
080f781f +0x01c:  nop
080f7820 +0x01d:  push   %ebp
080f7821 +0x01e:  mov    %esp,%ebp
080f7823 +0x020:  sub    $0x18,%esp
080f7826 +0x023:  mov    0x8(%ebp),%eax
080f7829 +0x026:  mov    0xc(%ebp),%edx
080f782c +0x029:  mov    %edx,0x4(%esp)
080f7830 +0x02d:  mov    %eax,(%esp)
080f7833 +0x030:  call   080c84fa <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x52>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x52
080f7838 +0x035:  leave
080f7839 +0x036:  ret
080f783a +0x037:  push   %ebp
080f783b +0x038:  mov    %esp,%ebp
080f783d +0x03a:  mov    0x8(%ebp),%eax
080f7840 +0x03d:  mov    0x7(%eax),%eax
080f7843 +0x040:  pop    %ebp
080f7844 +0x041:  ret
080f7845 +0x042:  push   %ebp
080f7846 +0x043:  mov    %esp,%ebp
080f7848 +0x045:  sub    $0x10,%esp
080f784b +0x048:  movl   $0x6,-0x4(%ebp)
080f7852 +0x04f:  mov    0x8(%ebp),%eax
080f7855 +0x052:  cmp    $0x12,%eax
080f7858 +0x055:  ja     080f7899 <+0x96>
080f785a +0x057:  mov    &data#215e9b19(.rodata)(,%eax,4),%eax
080f7861 +0x05e:  jmp    *%eax
080f7863 +0x060:  movl   $0x0,-0x4(%ebp)
080f786a +0x067:  jmp    080f78a0 <+0x9d>
080f786c +0x069:  movl   $0x2,-0x4(%ebp)
080f7873 +0x070:  jmp    080f78a0 <+0x9d>
080f7875 +0x072:  movl   $0x1,-0x4(%ebp)
080f787c +0x079:  jmp    080f78a0 <+0x9d>
080f787e +0x07b:  movl   $0x3,-0x4(%ebp)
080f7885 +0x082:  jmp    080f78a0 <+0x9d>
080f7887 +0x084:  movl   $0x4,-0x4(%ebp)
080f788e +0x08b:  jmp    080f78a0 <+0x9d>
080f7890 +0x08d:  movl   $0x5,-0x4(%ebp)
080f7897 +0x094:  jmp    080f78a0 <+0x9d>
080f7899 +0x096:  movl   $0x6,-0x4(%ebp)
080f78a0 +0x09d:  mov    -0x4(%ebp),%eax
080f78a3 +0x0a0:  leave
080f78a4 +0x0a1:  ret
080f78a5 +0x0a2:  nop
080f78a6 +0x0a3:  push   %ebp
080f78a7 +0x0a4:  mov    %esp,%ebp
080f78a9 +0x0a6:  push   %ebx
080f78aa +0x0a7:  sub    $0x14,%esp
080f78ad +0x0aa:  mov    0x8(%ebp),%ebx
080f78b0 +0x0ad:  mov    0xc(%ebp),%eax
080f78b3 +0x0b0:  mov    %eax,0x4(%esp)
080f78b7 +0x0b4:  mov    %ebx,(%esp)
080f78ba +0x0b7:  call   080f7952 <+0x14f>
080f78bf +0x0bc:  sub    $0x4,%esp
080f78c2 +0x0bf:  mov    %ebx,%eax
080f78c4 +0x0c1:  mov    -0x4(%ebp),%ebx
080f78c7 +0x0c4:  leave
080f78c8 +0x0c5:  ret    $0x4
080f78cb +0x0c8:  nop
080f78cc +0x0c9:  push   %ebp
080f78cd +0x0ca:  mov    %esp,%ebp
080f78cf +0x0cc:  push   %ebx
080f78d0 +0x0cd:  sub    $0x14,%esp
080f78d3 +0x0d0:  mov    0x8(%ebp),%ebx
080f78d6 +0x0d3:  mov    0xc(%ebp),%eax
080f78d9 +0x0d6:  mov    %eax,0x4(%esp)
080f78dd +0x0da:  mov    %ebx,(%esp)
080f78e0 +0x0dd:  call   080f7978 <+0x175>
080f78e5 +0x0e2:  sub    $0x4,%esp
080f78e8 +0x0e5:  mov    %ebx,%eax
080f78ea +0x0e7:  mov    -0x4(%ebp),%ebx
080f78ed +0x0ea:  leave
080f78ee +0x0eb:  ret    $0x4
080f78f1 +0x0ee:  nop
080f78f2 +0x0ef:  push   %ebp
080f78f3 +0x0f0:  mov    %esp,%ebp
080f78f5 +0x0f2:  mov    0x8(%ebp),%eax
080f78f8 +0x0f5:  mov    (%eax),%edx
080f78fa +0x0f7:  mov    0xc(%ebp),%eax
080f78fd +0x0fa:  mov    (%eax),%eax
080f78ff +0x0fc:  cmp    %eax,%edx
080f7901 +0x0fe:  setne  %al
080f7904 +0x101:  pop    %ebp
080f7905 +0x102:  ret
080f7906 +0x103:  push   %ebp
080f7907 +0x104:  mov    %esp,%ebp
080f7909 +0x106:  push   %ebx
080f790a +0x107:  sub    $0x14,%esp
080f790d +0x10a:  mov    0x8(%ebp),%ebx
080f7910 +0x10d:  mov    0xc(%ebp),%eax
080f7913 +0x110:  movl   $0x4,0x8(%esp)
080f791b +0x118:  mov    %eax,0x4(%esp)
080f791f +0x11c:  mov    %ebx,(%esp)
080f7922 +0x11f:  call   0807d880 <_init+0x178>
080f7927 +0x124:  mov    0xc(%ebp),%eax
080f792a +0x127:  mov    (%eax),%eax
080f792c +0x129:  mov    %eax,(%esp)
080f792f +0x12c:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
080f7934 +0x131:  mov    0xc(%ebp),%edx
080f7937 +0x134:  mov    %eax,(%edx)
080f7939 +0x136:  mov    %ebx,%eax
080f793b +0x138:  add    $0x14,%esp
080f793e +0x13b:  pop    %ebx
080f793f +0x13c:  pop    %ebp
080f7940 +0x13d:  ret    $0x4
080f7943 +0x140:  nop
080f7944 +0x141:  push   %ebp
080f7945 +0x142:  mov    %esp,%ebp
080f7947 +0x144:  mov    0x8(%ebp),%eax
080f794a +0x147:  mov    (%eax),%eax
080f794c +0x149:  add    $0x10,%eax
080f794f +0x14c:  pop    %ebp
080f7950 +0x14d:  ret
080f7951 +0x14e:  nop
080f7952 +0x14f:  push   %ebp
080f7953 +0x150:  mov    %esp,%ebp
080f7955 +0x152:  push   %ebx
080f7956 +0x153:  sub    $0x14,%esp
080f7959 +0x156:  mov    0x8(%ebp),%ebx
080f795c +0x159:  mov    0xc(%ebp),%eax
080f795f +0x15c:  mov    0xc(%eax),%eax
080f7962 +0x15f:  mov    %eax,0x4(%esp)
080f7966 +0x163:  mov    %ebx,(%esp)
080f7969 +0x166:  call   080f799e <+0x19b>
080f796e +0x16b:  mov    %ebx,%eax
080f7970 +0x16d:  add    $0x14,%esp
080f7973 +0x170:  pop    %ebx
080f7974 +0x171:  pop    %ebp
080f7975 +0x172:  ret    $0x4
080f7978 +0x175:  push   %ebp
080f7979 +0x176:  mov    %esp,%ebp
080f797b +0x178:  push   %ebx
080f797c +0x179:  sub    $0x14,%esp
080f797f +0x17c:  mov    0x8(%ebp),%ebx
080f7982 +0x17f:  mov    0xc(%ebp),%eax
080f7985 +0x182:  add    $0x4,%eax
080f7988 +0x185:  mov    %eax,0x4(%esp)
080f798c +0x189:  mov    %ebx,(%esp)
080f798f +0x18c:  call   080f799e <+0x19b>
080f7994 +0x191:  mov    %ebx,%eax
080f7996 +0x193:  add    $0x14,%esp
080f7999 +0x196:  pop    %ebx
080f799a +0x197:  pop    %ebp
080f799b +0x198:  ret    $0x4
080f799e +0x19b:  push   %ebp
080f799f +0x19c:  mov    %esp,%ebp
080f79a1 +0x19e:  mov    0xc(%ebp),%edx
080f79a4 +0x1a1:  mov    0x8(%ebp),%eax
080f79a7 +0x1a4:  mov    %edx,(%eax)
080f79a9 +0x1a6:  pop    %ebp
080f79aa +0x1a7:  ret
080f79ab +0x1a8:  nop
```

## 反编译 C

```c
// <global>::global @ 0x80f7803

/* GrowthEquipEvent::GrowthEquipEvent() */

void GrowthEquipEvent::_GLOBAL__I_GrowthEquipEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
