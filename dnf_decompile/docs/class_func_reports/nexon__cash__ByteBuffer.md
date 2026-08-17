# nexon__cash__ByteBuffer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## operator_lt__lt_

```asm
// === 081acba0 nexon::cash::ByteBuffer::operator<<  [0x081acba0-0x81acd1d] ===
 81acba0:	55                   	push   %ebp
 81acba1:	89 e5                	mov    %esp,%ebp
 81acba3:	57                   	push   %edi
 81acba4:	56                   	push   %esi
 81acba5:	53                   	push   %ebx
 81acba6:	83 ec 2c             	sub    $0x2c,%esp
 81acba9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81acbac:	89 04 24             	mov    %eax,(%esp)
 81acbaf:	e8 fc 17 ed ff       	call   807e3b0 <strlen@plt>
 81acbb4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81acbb7:	e8 e3 e7 f1 ff       	call   80cb39f <_ZNSt14numeric_limitsItE3maxEv>
 81acbbc:	0f b7 c0             	movzwl %ax,%eax
 81acbbf:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81acbc2:	0f 92 c0             	setb   %al
 81acbc5:	84 c0                	test   %al,%al
 81acbc7:	0f 84 dc 00 00 00    	je     81acca9 <_ZN5nexon4cash10ByteBufferlsEPKc+0x109>
 81acbcd:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81acbd0:	89 04 24             	mov    %eax,(%esp)
 81acbd3:	e8 f8 34 53 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81acbd8:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81acbdb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81acbdf:	c7 44 24 04 00 3c bb 	movl   $0x8bb3c00,0x4(%esp)
 81acbe6:	08 
 81acbe7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81acbea:	89 04 24             	mov    %eax,(%esp)
 81acbed:	e8 3e aa 55 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81acbf2:	8d 75 dc             	lea    -0x24(%ebp),%esi
 81acbf5:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81acbfc:	e8 ff 8b 57 00       	call   8725800 <__cxa_allocate_exception>
 81acc01:	89 c3                	mov    %eax,%ebx
 81acc03:	89 d8                	mov    %ebx,%eax
 81acc05:	89 74 24 04          	mov    %esi,0x4(%esp)
 81acc09:	89 04 24             	mov    %eax,(%esp)
 81acc0c:	e8 df 06 53 00       	call   86dd2f0 <_ZNSt16invalid_argumentC1ERKSs>
 81acc11:	eb 39                	jmp    81acc4c <_ZN5nexon4cash10ByteBufferlsEPKc+0xac>
 81acc13:	89 c1                	mov    %eax,%ecx
 81acc15:	89 d0                	mov    %edx,%eax
 81acc17:	89 c6                	mov    %eax,%esi
 81acc19:	89 cf                	mov    %ecx,%edi
 81acc1b:	89 1c 24             	mov    %ebx,(%esp)
 81acc1e:	e8 7d 89 57 00       	call   87255a0 <__cxa_free_exception>
 81acc23:	89 f9                	mov    %edi,%ecx
 81acc25:	89 f0                	mov    %esi,%eax
 81acc27:	89 c3                	mov    %eax,%ebx
 81acc29:	89 ce                	mov    %ecx,%esi
 81acc2b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81acc2e:	89 04 24             	mov    %eax,(%esp)
 81acc31:	e8 aa af 55 00       	call   8707be0 <_ZNSsD1Ev>
 81acc36:	eb 0e                	jmp    81acc46 <_ZN5nexon4cash10ByteBufferlsEPKc+0xa6>
 81acc38:	89 c1                	mov    %eax,%ecx
 81acc3a:	89 d0                	mov    %edx,%eax
 81acc3c:	83 f8 ff             	cmp    $0xffffffff,%eax
 81acc3f:	75 2a                	jne    81acc6b <_ZN5nexon4cash10ByteBufferlsEPKc+0xcb>
 81acc41:	e8 3a 7c 57 00       	call   8724880 <_ZSt9terminatev>
 81acc46:	89 f1                	mov    %esi,%ecx
 81acc48:	89 d8                	mov    %ebx,%eax
 81acc4a:	eb 1f                	jmp    81acc6b <_ZN5nexon4cash10ByteBufferlsEPKc+0xcb>
 81acc4c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81acc4f:	89 04 24             	mov    %eax,(%esp)
 81acc52:	e8 89 af 55 00       	call   8707be0 <_ZNSsD1Ev>
 81acc57:	eb 2d                	jmp    81acc86 <_ZN5nexon4cash10ByteBufferlsEPKc+0xe6>
 81acc59:	89 c1                	mov    %eax,%ecx
 81acc5b:	89 d0                	mov    %edx,%eax
 81acc5d:	83 f8 ff             	cmp    $0xffffffff,%eax
 81acc60:	75 09                	jne    81acc6b <_ZN5nexon4cash10ByteBufferlsEPKc+0xcb>
 81acc62:	e8 19 7c 57 00       	call   8724880 <_ZSt9terminatev>
 81acc67:	89 c1                	mov    %eax,%ecx
 81acc69:	89 d0                	mov    %edx,%eax
 81acc6b:	89 c3                	mov    %eax,%ebx
 81acc6d:	89 ce                	mov    %ecx,%esi
 81acc6f:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81acc72:	89 04 24             	mov    %eax,(%esp)
 81acc75:	e8 76 34 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81acc7a:	89 f1                	mov    %esi,%ecx
 81acc7c:	89 d8                	mov    %ebx,%eax
 81acc7e:	89 0c 24             	mov    %ecx,(%esp)
 81acc81:	e8 ca 6a 93 00       	call   8ae3750 <_Unwind_Resume>
 81acc86:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81acc89:	89 04 24             	mov    %eax,(%esp)
 81acc8c:	e8 5f 34 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81acc91:	c7 44 24 08 78 cf 1a 	movl   $0x81acf78,0x8(%esp)
 81acc98:	08 
 81acc99:	c7 44 24 04 a4 41 bb 	movl   $0x8bb41a4,0x4(%esp)
 81acca0:	08 
 81acca1:	89 1c 24             	mov    %ebx,(%esp)
 81acca4:	e8 a7 7f 57 00       	call   8724c50 <__cxa_throw>
 81acca9:	8b 45 08             	mov    0x8(%ebp),%eax
 81accac:	89 04 24             	mov    %eax,(%esp)
 81accaf:	e8 ac 02 00 00       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81accb4:	89 c2                	mov    %eax,%edx
 81accb6:	03 55 e4             	add    -0x1c(%ebp),%edx
 81accb9:	8b 45 08             	mov    0x8(%ebp),%eax
 81accbc:	8b 40 0c             	mov    0xc(%eax),%eax
 81accbf:	39 c2                	cmp    %eax,%edx
 81accc1:	0f 96 c0             	setbe  %al
 81accc4:	84 c0                	test   %al,%al
 81accc6:	74 4b                	je     81acd13 <_ZN5nexon4cash10ByteBufferlsEPKc+0x173>
 81accc8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81acccb:	0f b7 c0             	movzwl %ax,%eax
 81accce:	89 44 24 04          	mov    %eax,0x4(%esp)
 81accd2:	8b 45 08             	mov    0x8(%ebp),%eax
 81accd5:	89 04 24             	mov    %eax,(%esp)
 81accd8:	e8 1d 02 00 00       	call   81acefa <_ZN5nexon4cash10ByteBufferlsEt>
 81accdd:	8b 45 08             	mov    0x8(%ebp),%eax
 81acce0:	8b 40 04             	mov    0x4(%eax),%eax
 81acce3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81acce6:	89 54 24 08          	mov    %edx,0x8(%esp)
 81accea:	8b 55 0c             	mov    0xc(%ebp),%edx
 81acced:	89 54 24 04          	mov    %edx,0x4(%esp)
 81accf1:	89 04 24             	mov    %eax,(%esp)
 81accf4:	e8 d7 0b ed ff       	call   807d8d0 <strncpy@plt>
 81accf9:	8b 45 08             	mov    0x8(%ebp),%eax
 81accfc:	8b 58 04             	mov    0x4(%eax),%ebx
 81accff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81acd02:	89 04 24             	mov    %eax,(%esp)
 81acd05:	e8 a6 16 ed ff       	call   807e3b0 <strlen@plt>
 81acd0a:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 81acd0d:	8b 45 08             	mov    0x8(%ebp),%eax
 81acd10:	89 50 04             	mov    %edx,0x4(%eax)
 81acd13:	8b 45 08             	mov    0x8(%ebp),%eax
 81acd16:	83 c4 2c             	add    $0x2c,%esp
 81acd19:	5b                   	pop    %ebx
 81acd1a:	5e                   	pop    %esi
 81acd1b:	5f                   	pop    %edi
 81acd1c:	5d                   	pop    %ebp
 81acd1d:	c3                   	ret

```

```c
// nexon::cash::ByteBuffer::operator<< @ 0x81acba0

/* nexon::cash::ByteBuffer::TEMPNAMEPLACEHOLDERVALUE(char const*) */

ByteBuffer * __thiscall nexon::cash::ByteBuffer::operator<<(ByteBuffer *this,char *param_1)

{
  uint uVar1;
  invalid_argument *this_00;
  int iVar2;
  size_t sVar3;
  string local_28;
  allocator<char> local_21;
  uint local_20;
  
  local_20 = strlen(param_1);
  uVar1 = std::numeric_limits<unsigned_short>::max();
  if ((uVar1 & 0xffff) < local_20) {
    std::allocator<char>::allocator();
                    /* try { // try from 081acbed to 081acbf1 has its CatchHandler @ 081acc67 */
    std::string::string((string *)&local_28,
                        "string length too long: must shorter than max(unsigned short)",
                        (allocator *)&local_21);
    this_00 = (invalid_argument *)__cxa_allocate_exception(8);
                    /* try { // try from 081acc0c to 081acc10 has its CatchHandler @ 081acc13 */
    std::invalid_argument::invalid_argument(this_00,&local_28);
                    /* try { // try from 081acc52 to 081acc56 has its CatchHandler @ 081acc59 */
    std::string::~string((string *)&local_28);
    std::allocator<char>::~allocator(&local_21);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&std::invalid_argument::typeinfo,std::invalid_argument::~invalid_argument);
  }
  iVar2 = length(this);
  if (iVar2 + local_20 <= *(uint *)(this + 0xc)) {
    operator<<(this,(ushort)local_20);
    strncpy(*(char **)(this + 4),param_1,local_20);
    iVar2 = *(int *)(this + 4);
    sVar3 = strlen(param_1);
    *(size_t *)(this + 4) = iVar2 + sVar3;
  }
  return this;
}

```

---

## operator_lt__lt__081acd1e

```asm
// === 081acd1e nexon::cash::ByteBuffer::operator<<  [0x081acd1e-0x81ace9c] ===
 81acd1e:	55                   	push   %ebp
 81acd1f:	89 e5                	mov    %esp,%ebp
 81acd21:	57                   	push   %edi
 81acd22:	56                   	push   %esi
 81acd23:	53                   	push   %ebx
 81acd24:	83 ec 2c             	sub    $0x2c,%esp
 81acd27:	8b 45 0c             	mov    0xc(%ebp),%eax
 81acd2a:	89 04 24             	mov    %eax,(%esp)
 81acd2d:	e8 fe 13 ed ff       	call   807e130 <wcslen@plt>
 81acd32:	01 c0                	add    %eax,%eax
 81acd34:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81acd37:	e8 63 e6 f1 ff       	call   80cb39f <_ZNSt14numeric_limitsItE3maxEv>
 81acd3c:	0f b7 c0             	movzwl %ax,%eax
 81acd3f:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81acd42:	0f 92 c0             	setb   %al
 81acd45:	84 c0                	test   %al,%al
 81acd47:	0f 84 dc 00 00 00    	je     81ace29 <_ZN5nexon4cash10ByteBufferlsEPKw+0x10b>
 81acd4d:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81acd50:	89 04 24             	mov    %eax,(%esp)
 81acd53:	e8 78 33 53 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81acd58:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81acd5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81acd5f:	c7 44 24 04 00 3c bb 	movl   $0x8bb3c00,0x4(%esp)
 81acd66:	08 
 81acd67:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81acd6a:	89 04 24             	mov    %eax,(%esp)
 81acd6d:	e8 be a8 55 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81acd72:	8d 75 dc             	lea    -0x24(%ebp),%esi
 81acd75:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81acd7c:	e8 7f 8a 57 00       	call   8725800 <__cxa_allocate_exception>
 81acd81:	89 c3                	mov    %eax,%ebx
 81acd83:	89 d8                	mov    %ebx,%eax
 81acd85:	89 74 24 04          	mov    %esi,0x4(%esp)
 81acd89:	89 04 24             	mov    %eax,(%esp)
 81acd8c:	e8 5f 05 53 00       	call   86dd2f0 <_ZNSt16invalid_argumentC1ERKSs>
 81acd91:	eb 39                	jmp    81acdcc <_ZN5nexon4cash10ByteBufferlsEPKw+0xae>
 81acd93:	89 c1                	mov    %eax,%ecx
 81acd95:	89 d0                	mov    %edx,%eax
 81acd97:	89 c6                	mov    %eax,%esi
 81acd99:	89 cf                	mov    %ecx,%edi
 81acd9b:	89 1c 24             	mov    %ebx,(%esp)
 81acd9e:	e8 fd 87 57 00       	call   87255a0 <__cxa_free_exception>
 81acda3:	89 f9                	mov    %edi,%ecx
 81acda5:	89 f0                	mov    %esi,%eax
 81acda7:	89 c3                	mov    %eax,%ebx
 81acda9:	89 ce                	mov    %ecx,%esi
 81acdab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81acdae:	89 04 24             	mov    %eax,(%esp)
 81acdb1:	e8 2a ae 55 00       	call   8707be0 <_ZNSsD1Ev>
 81acdb6:	eb 0e                	jmp    81acdc6 <_ZN5nexon4cash10ByteBufferlsEPKw+0xa8>
 81acdb8:	89 c1                	mov    %eax,%ecx
 81acdba:	89 d0                	mov    %edx,%eax
 81acdbc:	83 f8 ff             	cmp    $0xffffffff,%eax
 81acdbf:	75 2a                	jne    81acdeb <_ZN5nexon4cash10ByteBufferlsEPKw+0xcd>
 81acdc1:	e8 ba 7a 57 00       	call   8724880 <_ZSt9terminatev>
 81acdc6:	89 f1                	mov    %esi,%ecx
 81acdc8:	89 d8                	mov    %ebx,%eax
 81acdca:	eb 1f                	jmp    81acdeb <_ZN5nexon4cash10ByteBufferlsEPKw+0xcd>
 81acdcc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81acdcf:	89 04 24             	mov    %eax,(%esp)
 81acdd2:	e8 09 ae 55 00       	call   8707be0 <_ZNSsD1Ev>
 81acdd7:	eb 2d                	jmp    81ace06 <_ZN5nexon4cash10ByteBufferlsEPKw+0xe8>
 81acdd9:	89 c1                	mov    %eax,%ecx
 81acddb:	89 d0                	mov    %edx,%eax
 81acddd:	83 f8 ff             	cmp    $0xffffffff,%eax
 81acde0:	75 09                	jne    81acdeb <_ZN5nexon4cash10ByteBufferlsEPKw+0xcd>
 81acde2:	e8 99 7a 57 00       	call   8724880 <_ZSt9terminatev>
 81acde7:	89 c1                	mov    %eax,%ecx
 81acde9:	89 d0                	mov    %edx,%eax
 81acdeb:	89 c3                	mov    %eax,%ebx
 81acded:	89 ce                	mov    %ecx,%esi
 81acdef:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81acdf2:	89 04 24             	mov    %eax,(%esp)
 81acdf5:	e8 f6 32 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81acdfa:	89 f1                	mov    %esi,%ecx
 81acdfc:	89 d8                	mov    %ebx,%eax
 81acdfe:	89 0c 24             	mov    %ecx,(%esp)
 81ace01:	e8 4a 69 93 00       	call   8ae3750 <_Unwind_Resume>
 81ace06:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 81ace09:	89 04 24             	mov    %eax,(%esp)
 81ace0c:	e8 df 32 53 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81ace11:	c7 44 24 08 78 cf 1a 	movl   $0x81acf78,0x8(%esp)
 81ace18:	08 
 81ace19:	c7 44 24 04 a4 41 bb 	movl   $0x8bb41a4,0x4(%esp)
 81ace20:	08 
 81ace21:	89 1c 24             	mov    %ebx,(%esp)
 81ace24:	e8 27 7e 57 00       	call   8724c50 <__cxa_throw>
 81ace29:	8b 45 08             	mov    0x8(%ebp),%eax
 81ace2c:	89 04 24             	mov    %eax,(%esp)
 81ace2f:	e8 2c 01 00 00       	call   81acf60 <_ZNK5nexon4cash10ByteBuffer6lengthEv>
 81ace34:	89 c2                	mov    %eax,%edx
 81ace36:	03 55 e4             	add    -0x1c(%ebp),%edx
 81ace39:	8b 45 08             	mov    0x8(%ebp),%eax
 81ace3c:	8b 40 0c             	mov    0xc(%eax),%eax
 81ace3f:	39 c2                	cmp    %eax,%edx
 81ace41:	0f 96 c0             	setbe  %al
 81ace44:	84 c0                	test   %al,%al
 81ace46:	74 4a                	je     81ace92 <_ZN5nexon4cash10ByteBufferlsEPKw+0x174>
 81ace48:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ace4b:	0f b7 c0             	movzwl %ax,%eax
 81ace4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ace52:	8b 45 08             	mov    0x8(%ebp),%eax
 81ace55:	89 04 24             	mov    %eax,(%esp)
 81ace58:	e8 9d 00 00 00       	call   81acefa <_ZN5nexon4cash10ByteBufferlsEt>
 81ace5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ace60:	89 04 24             	mov    %eax,(%esp)
 81ace63:	e8 c8 12 ed ff       	call   807e130 <wcslen@plt>
 81ace68:	8b 55 08             	mov    0x8(%ebp),%edx
 81ace6b:	8b 52 04             	mov    0x4(%edx),%edx
 81ace6e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ace72:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ace75:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ace79:	89 14 24             	mov    %edx,(%esp)
 81ace7c:	e8 df 15 ed ff       	call   807e460 <wcsncpy@plt>
 81ace81:	8b 45 08             	mov    0x8(%ebp),%eax
 81ace84:	8b 40 04             	mov    0x4(%eax),%eax
 81ace87:	89 c2                	mov    %eax,%edx
 81ace89:	03 55 e4             	add    -0x1c(%ebp),%edx
 81ace8c:	8b 45 08             	mov    0x8(%ebp),%eax
 81ace8f:	89 50 04             	mov    %edx,0x4(%eax)
 81ace92:	8b 45 08             	mov    0x8(%ebp),%eax
 81ace95:	83 c4 2c             	add    $0x2c,%esp
 81ace98:	5b                   	pop    %ebx
 81ace99:	5e                   	pop    %esi
 81ace9a:	5f                   	pop    %edi
 81ace9b:	5d                   	pop    %ebp
 81ace9c:	c3                   	ret

```

```c
// nexon::cash::ByteBuffer::operator<< @ 0x81acd1e

/* nexon::cash::ByteBuffer::TEMPNAMEPLACEHOLDERVALUE(wchar_t const*) */

ByteBuffer * __thiscall nexon::cash::ByteBuffer::operator<<(ByteBuffer *this,wchar_t *param_1)

{
  size_t sVar1;
  uint uVar2;
  invalid_argument *this_00;
  int iVar3;
  string local_28;
  allocator<char> local_21;
  uint local_20;
  
  sVar1 = wcslen(param_1);
  local_20 = sVar1 * 2;
  uVar2 = std::numeric_limits<unsigned_short>::max();
  if ((uVar2 & 0xffff) < local_20) {
    std::allocator<char>::allocator();
                    /* try { // try from 081acd6d to 081acd71 has its CatchHandler @ 081acde7 */
    std::string::string((string *)&local_28,
                        "string length too long: must shorter than max(unsigned short)",
                        (allocator *)&local_21);
    this_00 = (invalid_argument *)__cxa_allocate_exception(8);
                    /* try { // try from 081acd8c to 081acd90 has its CatchHandler @ 081acd93 */
    std::invalid_argument::invalid_argument(this_00,&local_28);
                    /* try { // try from 081acdd2 to 081acdd6 has its CatchHandler @ 081acdd9 */
    std::string::~string((string *)&local_28);
    std::allocator<char>::~allocator(&local_21);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&std::invalid_argument::typeinfo,std::invalid_argument::~invalid_argument);
  }
  iVar3 = length(this);
  if (iVar3 + local_20 <= *(uint *)(this + 0xc)) {
    operator<<(this,(ushort)local_20);
    sVar1 = wcslen(param_1);
    wcsncpy(*(wchar_t **)(this + 4),param_1,sVar1);
    *(uint *)(this + 4) = *(int *)(this + 4) + local_20;
  }
  return this;
}

```

