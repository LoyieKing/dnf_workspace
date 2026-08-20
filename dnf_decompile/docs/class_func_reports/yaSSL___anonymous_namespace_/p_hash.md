# p_hash

`_ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE`

`yaSSL::(anonymous namespace)::p_hash(yaSSL::output_buffer&, yaSSL::output_buffer const&, yaSSL::output_buffer const&, yaSSL::MACAlgorithm)`

| 类 | 地址 |
|---|---|
| `yaSSL::(anonymous namespace)` | `0x0879e730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879e730  _ZN5yaSSL12_GLOBAL__N_16p_hashERNS_13output_bufferERKS1_S4_NS_12MACAlgorithmE
#           yaSSL::(anonymous namespace)::p_hash(yaSSL::output_buffer&, yaSSL::output_buffer const&, yaSSL::output_buffer const&, yaSSL::MACAlgorithm)
# range [0x0879e730, 0x0879e979]
0879e730 +0x000:  push   %ebp
0879e731 +0x001:  mov    %esp,%ebp
0879e733 +0x003:  push   %edi
0879e734 +0x004:  push   %esi
0879e735 +0x005:  mov    %edx,%esi
0879e737 +0x007:  push   %ebx
0879e738 +0x008:  call   08722df8 <__i686.get_pc_thunk.bx>
0879e73d +0x00d:  add    $0xbce45b,%ebx
0879e743 +0x013:  sub    $0x7c,%esp
0879e746 +0x016:  mov    %eax,-0x60(%ebp)
0879e749 +0x019:  xor    %eax,%eax
0879e74b +0x01b:  mov    -0x60(%ebp),%edx
0879e74e +0x01e:  cmpl   $0x1,0xc(%ebp)
0879e752 +0x022:  setne  %al
0879e755 +0x025:  lea    0x10(,%eax,4),%eax
0879e75c +0x02c:  mov    %edx,(%esp)
0879e75f +0x02f:  mov    %eax,-0x4c(%ebp)
0879e762 +0x032:  call   08796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>  ; yaSSL::output_buffer::get_capacity() const
0879e767 +0x037:  xor    %edx,%edx
0879e769 +0x039:  divl   -0x4c(%ebp)
0879e76c +0x03c:  mov    %eax,%edi
0879e76e +0x03e:  mov    -0x60(%ebp),%eax
0879e771 +0x041:  mov    %eax,(%esp)
0879e774 +0x044:  call   08796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>  ; yaSSL::output_buffer::get_capacity() const
0879e779 +0x049:  xor    %edx,%edx
0879e77b +0x04b:  divl   -0x4c(%ebp)
0879e77e +0x04e:  lea    0x1(%edi),%eax
0879e781 +0x051:  test   %edx,%edx
0879e783 +0x053:  cmovne %eax,%edi
0879e786 +0x056:  cmpl   $0x1,0xc(%ebp)
0879e78a +0x05a:  mov    %edx,-0x68(%ebp)
0879e78d +0x05d:  mov    %edi,-0x5c(%ebp)
0879e790 +0x060:  je     0879e930 <+0x200>
0879e796 +0x066:  mov    %esi,(%esp)
0879e799 +0x069:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879e79e +0x06e:  mov    %esi,(%esp)
0879e7a1 +0x071:  mov    %eax,-0x70(%ebp)
0879e7a4 +0x074:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879e7a9 +0x079:  movb   $0x0,0x4(%esp)
0879e7ae +0x07e:  movl   $0x8,(%esp)
0879e7b5 +0x085:  mov    %eax,%edi
0879e7b7 +0x087:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879e7bc +0x08c:  mov    -0x70(%ebp),%edx
0879e7bf +0x08f:  mov    %edi,0x8(%esp)
0879e7c3 +0x093:  mov    %edx,0x4(%esp)
0879e7c7 +0x097:  mov    %eax,%esi
0879e7c9 +0x099:  mov    %eax,(%esp)
0879e7cc +0x09c:  call   08799a10 <_ZN5yaSSL8HMAC_SHAC1EPKhj>  ; yaSSL::HMAC_SHA::HMAC_SHA(unsigned char const*, unsigned int)
0879e7d1 +0x0a1:  test   %esi,%esi
0879e7d3 +0x0a3:  je     0879e7e6 <+0xb6>
0879e7d5 +0x0a5:  movb   $0x0,0x4(%esp)
0879e7da +0x0aa:  movl   $0x0,(%esp)
0879e7e1 +0x0b1:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879e7e6 +0x0b6:  mov    (%esi),%eax
0879e7e8 +0x0b8:  mov    0x4(%eax),%eax
0879e7eb +0x0bb:  mov    %eax,-0x54(%ebp)
0879e7ee +0x0be:  mov    0x8(%ebp),%eax
0879e7f1 +0x0c1:  mov    %eax,(%esp)
0879e7f4 +0x0c4:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879e7f9 +0x0c9:  mov    0x8(%ebp),%edx
0879e7fc +0x0cc:  mov    %edx,(%esp)
0879e7ff +0x0cf:  mov    %eax,%edi
0879e801 +0x0d1:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879e806 +0x0d6:  mov    %edi,0xc(%esp)
0879e80a +0x0da:  mov    %esi,(%esp)
0879e80d +0x0dd:  mov    %eax,0x8(%esp)
0879e811 +0x0e1:  lea    -0x2c(%ebp),%eax
0879e814 +0x0e4:  mov    %eax,-0x50(%ebp)
0879e817 +0x0e7:  mov    %eax,0x4(%esp)
0879e81b +0x0eb:  call   *-0x54(%ebp)
0879e81e +0x0ee:  mov    -0x5c(%ebp),%edx
0879e821 +0x0f1:  mov    -0x5c(%ebp),%edi
0879e824 +0x0f4:  sub    $0x1,%edx
0879e827 +0x0f7:  test   %edi,%edi
0879e829 +0x0f9:  mov    %edx,-0x64(%ebp)
0879e82c +0x0fc:  je     0879e90c <+0x1dc>
0879e832 +0x102:  mov    -0x68(%ebp),%ecx
0879e835 +0x105:  lea    -0x40(%ebp),%eax
0879e838 +0x108:  mov    %eax,-0x54(%ebp)
0879e83b +0x10b:  test   %ecx,%ecx
0879e83d +0x10d:  setne  -0x69(%ebp)
0879e841 +0x111:  xor    %edi,%edi
0879e843 +0x113:  jmp    0879e873 <+0x143>
0879e845 +0x115:  lea    0x0(%esi),%esi
0879e848 +0x118:  cmpb   $0x0,-0x69(%ebp)
0879e84c +0x11c:  je     0879e8cd <+0x19d>
0879e84e +0x11e:  mov    -0x68(%ebp),%eax
0879e851 +0x121:  add    $0x1,%edi
0879e854 +0x124:  mov    -0x54(%ebp),%edx
0879e857 +0x127:  mov    %eax,0x8(%esp)
0879e85b +0x12b:  mov    -0x60(%ebp),%eax
0879e85e +0x12e:  mov    %edx,0x4(%esp)
0879e862 +0x132:  mov    %eax,(%esp)
0879e865 +0x135:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0879e86a +0x13a:  cmp    %edi,-0x5c(%ebp)
0879e86d +0x13d:  jbe    0879e90c <+0x1dc>
0879e873 +0x143:  mov    -0x4c(%ebp),%edx
0879e876 +0x146:  mov    (%esi),%eax
0879e878 +0x148:  mov    %esi,(%esp)
0879e87b +0x14b:  mov    %edx,0x8(%esp)
0879e87f +0x14f:  mov    -0x50(%ebp),%edx
0879e882 +0x152:  mov    %edx,0x4(%esp)
0879e886 +0x156:  call   *0x8(%eax)
0879e889 +0x159:  mov    (%esi),%eax
0879e88b +0x15b:  mov    0x4(%eax),%eax
0879e88e +0x15e:  mov    %eax,-0x58(%ebp)
0879e891 +0x161:  mov    0x8(%ebp),%eax
0879e894 +0x164:  mov    %eax,(%esp)
0879e897 +0x167:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879e89c +0x16c:  mov    %eax,%edx
0879e89e +0x16e:  mov    0x8(%ebp),%eax
0879e8a1 +0x171:  mov    %edx,-0x70(%ebp)
0879e8a4 +0x174:  mov    %eax,(%esp)
0879e8a7 +0x177:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879e8ac +0x17c:  mov    -0x70(%ebp),%edx
0879e8af +0x17f:  mov    %esi,(%esp)
0879e8b2 +0x182:  mov    %edx,0xc(%esp)
0879e8b6 +0x186:  mov    -0x54(%ebp),%edx
0879e8b9 +0x189:  mov    %eax,0x8(%esp)
0879e8bd +0x18d:  mov    %edx,0x4(%esp)
0879e8c1 +0x191:  call   *-0x58(%ebp)
0879e8c4 +0x194:  cmp    -0x64(%ebp),%edi
0879e8c7 +0x197:  je     0879e848 <+0x118>
0879e8cd +0x19d:  mov    -0x4c(%ebp),%edx
0879e8d0 +0x1a0:  add    $0x1,%edi
0879e8d3 +0x1a3:  mov    -0x54(%ebp),%eax
0879e8d6 +0x1a6:  mov    %edx,0x8(%esp)
0879e8da +0x1aa:  mov    -0x60(%ebp),%edx
0879e8dd +0x1ad:  mov    %eax,0x4(%esp)
0879e8e1 +0x1b1:  mov    %edx,(%esp)
0879e8e4 +0x1b4:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
0879e8e9 +0x1b9:  mov    -0x4c(%ebp),%edx
0879e8ec +0x1bc:  mov    (%esi),%eax
0879e8ee +0x1be:  mov    %esi,(%esp)
0879e8f1 +0x1c1:  mov    %edx,0xc(%esp)
0879e8f5 +0x1c5:  mov    -0x50(%ebp),%edx
0879e8f8 +0x1c8:  mov    %edx,0x8(%esp)
0879e8fc +0x1cc:  mov    %edx,0x4(%esp)
0879e900 +0x1d0:  call   *0x4(%eax)
0879e903 +0x1d3:  cmp    %edi,-0x5c(%ebp)
0879e906 +0x1d6:  ja     0879e873 <+0x143>
0879e90c +0x1dc:  mov    (%esi),%eax
0879e90e +0x1de:  mov    %esi,(%esp)
0879e911 +0x1e1:  call   *0x14(%eax)
0879e914 +0x1e4:  mov    %esi,(%esp)
0879e917 +0x1e7:  movb   $0x0,0x4(%esp)
0879e91c +0x1ec:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879e921 +0x1f1:  add    $0x7c,%esp
0879e924 +0x1f4:  pop    %ebx
0879e925 +0x1f5:  pop    %esi
0879e926 +0x1f6:  pop    %edi
0879e927 +0x1f7:  pop    %ebp
0879e928 +0x1f8:  ret
0879e929 +0x1f9:  lea    0x0(%esi,%eiz,1),%esi
0879e930 +0x200:  mov    %esi,(%esp)
0879e933 +0x203:  call   08796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>  ; yaSSL::output_buffer::get_buffer() const
0879e938 +0x208:  mov    %esi,(%esp)
0879e93b +0x20b:  mov    %eax,-0x70(%ebp)
0879e93e +0x20e:  call   08796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>  ; yaSSL::output_buffer::get_size() const
0879e943 +0x213:  movb   $0x0,0x4(%esp)
0879e948 +0x218:  movl   $0x8,(%esp)
0879e94f +0x21f:  mov    %eax,%edi
0879e951 +0x221:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879e956 +0x226:  mov    -0x70(%ebp),%edx
0879e959 +0x229:  mov    %edi,0x8(%esp)
0879e95d +0x22d:  mov    %edx,0x4(%esp)
0879e961 +0x231:  mov    %eax,%esi
0879e963 +0x233:  mov    %eax,(%esp)
0879e966 +0x236:  call   08799ce0 <_ZN5yaSSL8HMAC_MD5C1EPKhj>  ; yaSSL::HMAC_MD5::HMAC_MD5(unsigned char const*, unsigned int)
0879e96b +0x23b:  test   %esi,%esi
0879e96d +0x23d:  jne    0879e7d5 <+0xa5>
0879e973 +0x243:  jmp    0879e7e6 <+0xb6>
0879e978 +0x248:  nop
0879e979 +0x249:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// p_hash @ 0x879e730

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::(anonymous namespace)::p_hash(yaSSL::output_buffer&, yaSSL::output_buffer const&,
   yaSSL::output_buffer const&, yaSSL::MACAlgorithm) */

void __regparm2
yaSSL::(anonymous_namespace)::p_hash
          (output_buffer *param_1,output_buffer *param_2,output_buffer *param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uchar *puVar5;
  HMAC_SHA *this;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint in_stack_ffffff78;
  uchar local_44 [20];
  uchar local_30 [28];
  undefined4 uStack_14;
  
  uStack_14 = 0x879e73d;
  uVar1 = (uint)(param_4 != 1) * 4 + 0x10;
  uVar3 = output_buffer::get_capacity(param_1);
  uVar4 = output_buffer::get_capacity(param_1);
  uVar4 = uVar4 % uVar1;
  uVar8 = uVar3 / uVar1;
  if (uVar4 != 0) {
    uVar8 = uVar3 / uVar1 + 1;
  }
  if (param_4 == 1) {
    puVar5 = (uchar *)output_buffer::get_buffer(param_2);
    uVar3 = output_buffer::get_size(param_2);
    this = operator_new(8,in_stack_ffffff78 & 0xffffff00);
    HMAC_MD5::HMAC_MD5((HMAC_MD5 *)this,puVar5,uVar3);
  }
  else {
    puVar5 = (uchar *)output_buffer::get_buffer(param_2);
    uVar3 = output_buffer::get_size(param_2);
    this = operator_new(8,in_stack_ffffff78 & 0xffffff00);
    HMAC_SHA::HMAC_SHA(this,puVar5,uVar3);
  }
  if (this != (HMAC_SHA *)0x0) {
    operator_delete(0,(uint)puVar5 & 0xffffff00);
  }
  pcVar2 = *(code **)(*(int *)this + 4);
  uVar6 = output_buffer::get_size(param_3);
  uVar7 = output_buffer::get_buffer(param_3);
  puVar5 = local_30;
  (*pcVar2)(this,local_30,uVar7,uVar6);
  if (uVar8 != 0) {
    uVar3 = 0;
    do {
      while( true ) {
        (**(code **)(*(int *)this + 8))(this,local_30,uVar1);
        pcVar2 = *(code **)(*(int *)this + 4);
        uVar6 = output_buffer::get_size(param_3);
        uVar7 = output_buffer::get_buffer(param_3);
        (*pcVar2)(this,local_44,uVar7,uVar6);
        if ((uVar3 == uVar8 - 1) && (uVar4 != 0)) break;
        uVar3 = uVar3 + 1;
        output_buffer::write(param_1,local_44,uVar1);
        puVar5 = local_30;
        (**(code **)(*(int *)this + 4))(this,local_30,local_30,uVar1);
        if (uVar8 <= uVar3) goto LAB_0879e90c;
      }
      uVar3 = uVar3 + 1;
      puVar5 = local_44;
      output_buffer::write(param_1,local_44,uVar4);
    } while (uVar3 < uVar8);
  }
LAB_0879e90c:
  (**(code **)(*(int *)this + 0x14))(this);
  operator_delete(this,(uint)puVar5 & 0xffffff00);
  return;
}
```
