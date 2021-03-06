// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: primitive/header.proto

package choreo;

public final class HeaderOuterClass {
  private HeaderOuterClass() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  public interface HeaderOrBuilder extends
      // @@protoc_insertion_point(interface_extends:choreo.Header)
      com.google.protobuf.MessageOrBuilder {

    /**
     * <code>uint32 seq = 1;</code>
     */
    int getSeq();

    /**
     * <code>.google.protobuf.Timestamp stamp = 2;</code>
     */
    boolean hasStamp();
    /**
     * <code>.google.protobuf.Timestamp stamp = 2;</code>
     */
    com.google.protobuf.Timestamp getStamp();
    /**
     * <code>.google.protobuf.Timestamp stamp = 2;</code>
     */
    com.google.protobuf.TimestampOrBuilder getStampOrBuilder();

    /**
     * <code>string frame_id = 3;</code>
     */
    java.lang.String getFrameId();
    /**
     * <code>string frame_id = 3;</code>
     */
    com.google.protobuf.ByteString
        getFrameIdBytes();
  }
  /**
   * Protobuf type {@code choreo.Header}
   */
  public  static final class Header extends
      com.google.protobuf.GeneratedMessageV3 implements
      // @@protoc_insertion_point(message_implements:choreo.Header)
      HeaderOrBuilder {
    // Use Header.newBuilder() to construct.
    private Header(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
      super(builder);
    }
    private Header() {
      seq_ = 0;
      frameId_ = "";
    }

    @java.lang.Override
    public final com.google.protobuf.UnknownFieldSet
    getUnknownFields() {
      return com.google.protobuf.UnknownFieldSet.getDefaultInstance();
    }
    private Header(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      this();
      int mutable_bitField0_ = 0;
      try {
        boolean done = false;
        while (!done) {
          int tag = input.readTag();
          switch (tag) {
            case 0:
              done = true;
              break;
            default: {
              if (!input.skipField(tag)) {
                done = true;
              }
              break;
            }
            case 8: {

              seq_ = input.readUInt32();
              break;
            }
            case 18: {
              com.google.protobuf.Timestamp.Builder subBuilder = null;
              if (stamp_ != null) {
                subBuilder = stamp_.toBuilder();
              }
              stamp_ = input.readMessage(com.google.protobuf.Timestamp.parser(), extensionRegistry);
              if (subBuilder != null) {
                subBuilder.mergeFrom(stamp_);
                stamp_ = subBuilder.buildPartial();
              }

              break;
            }
            case 26: {
              java.lang.String s = input.readStringRequireUtf8();

              frameId_ = s;
              break;
            }
          }
        }
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        throw e.setUnfinishedMessage(this);
      } catch (java.io.IOException e) {
        throw new com.google.protobuf.InvalidProtocolBufferException(
            e).setUnfinishedMessage(this);
      } finally {
        makeExtensionsImmutable();
      }
    }
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return choreo.HeaderOuterClass.internal_static_choreo_Header_descriptor;
    }

    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return choreo.HeaderOuterClass.internal_static_choreo_Header_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              choreo.HeaderOuterClass.Header.class, choreo.HeaderOuterClass.Header.Builder.class);
    }

    public static final int SEQ_FIELD_NUMBER = 1;
    private int seq_;
    /**
     * <code>uint32 seq = 1;</code>
     */
    public int getSeq() {
      return seq_;
    }

    public static final int STAMP_FIELD_NUMBER = 2;
    private com.google.protobuf.Timestamp stamp_;
    /**
     * <code>.google.protobuf.Timestamp stamp = 2;</code>
     */
    public boolean hasStamp() {
      return stamp_ != null;
    }
    /**
     * <code>.google.protobuf.Timestamp stamp = 2;</code>
     */
    public com.google.protobuf.Timestamp getStamp() {
      return stamp_ == null ? com.google.protobuf.Timestamp.getDefaultInstance() : stamp_;
    }
    /**
     * <code>.google.protobuf.Timestamp stamp = 2;</code>
     */
    public com.google.protobuf.TimestampOrBuilder getStampOrBuilder() {
      return getStamp();
    }

    public static final int FRAME_ID_FIELD_NUMBER = 3;
    private volatile java.lang.Object frameId_;
    /**
     * <code>string frame_id = 3;</code>
     */
    public java.lang.String getFrameId() {
      java.lang.Object ref = frameId_;
      if (ref instanceof java.lang.String) {
        return (java.lang.String) ref;
      } else {
        com.google.protobuf.ByteString bs = 
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        frameId_ = s;
        return s;
      }
    }
    /**
     * <code>string frame_id = 3;</code>
     */
    public com.google.protobuf.ByteString
        getFrameIdBytes() {
      java.lang.Object ref = frameId_;
      if (ref instanceof java.lang.String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        frameId_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }

    private byte memoizedIsInitialized = -1;
    public final boolean isInitialized() {
      byte isInitialized = memoizedIsInitialized;
      if (isInitialized == 1) return true;
      if (isInitialized == 0) return false;

      memoizedIsInitialized = 1;
      return true;
    }

    public void writeTo(com.google.protobuf.CodedOutputStream output)
                        throws java.io.IOException {
      if (seq_ != 0) {
        output.writeUInt32(1, seq_);
      }
      if (stamp_ != null) {
        output.writeMessage(2, getStamp());
      }
      if (!getFrameIdBytes().isEmpty()) {
        com.google.protobuf.GeneratedMessageV3.writeString(output, 3, frameId_);
      }
    }

    public int getSerializedSize() {
      int size = memoizedSize;
      if (size != -1) return size;

      size = 0;
      if (seq_ != 0) {
        size += com.google.protobuf.CodedOutputStream
          .computeUInt32Size(1, seq_);
      }
      if (stamp_ != null) {
        size += com.google.protobuf.CodedOutputStream
          .computeMessageSize(2, getStamp());
      }
      if (!getFrameIdBytes().isEmpty()) {
        size += com.google.protobuf.GeneratedMessageV3.computeStringSize(3, frameId_);
      }
      memoizedSize = size;
      return size;
    }

    private static final long serialVersionUID = 0L;
    @java.lang.Override
    public boolean equals(final java.lang.Object obj) {
      if (obj == this) {
       return true;
      }
      if (!(obj instanceof choreo.HeaderOuterClass.Header)) {
        return super.equals(obj);
      }
      choreo.HeaderOuterClass.Header other = (choreo.HeaderOuterClass.Header) obj;

      boolean result = true;
      result = result && (getSeq()
          == other.getSeq());
      result = result && (hasStamp() == other.hasStamp());
      if (hasStamp()) {
        result = result && getStamp()
            .equals(other.getStamp());
      }
      result = result && getFrameId()
          .equals(other.getFrameId());
      return result;
    }

    @java.lang.Override
    public int hashCode() {
      if (memoizedHashCode != 0) {
        return memoizedHashCode;
      }
      int hash = 41;
      hash = (19 * hash) + getDescriptor().hashCode();
      hash = (37 * hash) + SEQ_FIELD_NUMBER;
      hash = (53 * hash) + getSeq();
      if (hasStamp()) {
        hash = (37 * hash) + STAMP_FIELD_NUMBER;
        hash = (53 * hash) + getStamp().hashCode();
      }
      hash = (37 * hash) + FRAME_ID_FIELD_NUMBER;
      hash = (53 * hash) + getFrameId().hashCode();
      hash = (29 * hash) + unknownFields.hashCode();
      memoizedHashCode = hash;
      return hash;
    }

    public static choreo.HeaderOuterClass.Header parseFrom(
        java.nio.ByteBuffer data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static choreo.HeaderOuterClass.Header parseFrom(
        java.nio.ByteBuffer data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static choreo.HeaderOuterClass.Header parseFrom(
        com.google.protobuf.ByteString data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static choreo.HeaderOuterClass.Header parseFrom(
        com.google.protobuf.ByteString data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static choreo.HeaderOuterClass.Header parseFrom(byte[] data)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data);
    }
    public static choreo.HeaderOuterClass.Header parseFrom(
        byte[] data,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return PARSER.parseFrom(data, extensionRegistry);
    }
    public static choreo.HeaderOuterClass.Header parseFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static choreo.HeaderOuterClass.Header parseFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }
    public static choreo.HeaderOuterClass.Header parseDelimitedFrom(java.io.InputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input);
    }
    public static choreo.HeaderOuterClass.Header parseDelimitedFrom(
        java.io.InputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
    }
    public static choreo.HeaderOuterClass.Header parseFrom(
        com.google.protobuf.CodedInputStream input)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input);
    }
    public static choreo.HeaderOuterClass.Header parseFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      return com.google.protobuf.GeneratedMessageV3
          .parseWithIOException(PARSER, input, extensionRegistry);
    }

    public Builder newBuilderForType() { return newBuilder(); }
    public static Builder newBuilder() {
      return DEFAULT_INSTANCE.toBuilder();
    }
    public static Builder newBuilder(choreo.HeaderOuterClass.Header prototype) {
      return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
    }
    public Builder toBuilder() {
      return this == DEFAULT_INSTANCE
          ? new Builder() : new Builder().mergeFrom(this);
    }

    @java.lang.Override
    protected Builder newBuilderForType(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      Builder builder = new Builder(parent);
      return builder;
    }
    /**
     * Protobuf type {@code choreo.Header}
     */
    public static final class Builder extends
        com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
        // @@protoc_insertion_point(builder_implements:choreo.Header)
        choreo.HeaderOuterClass.HeaderOrBuilder {
      public static final com.google.protobuf.Descriptors.Descriptor
          getDescriptor() {
        return choreo.HeaderOuterClass.internal_static_choreo_Header_descriptor;
      }

      protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
          internalGetFieldAccessorTable() {
        return choreo.HeaderOuterClass.internal_static_choreo_Header_fieldAccessorTable
            .ensureFieldAccessorsInitialized(
                choreo.HeaderOuterClass.Header.class, choreo.HeaderOuterClass.Header.Builder.class);
      }

      // Construct using choreo.HeaderOuterClass.Header.newBuilder()
      private Builder() {
        maybeForceBuilderInitialization();
      }

      private Builder(
          com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
        super(parent);
        maybeForceBuilderInitialization();
      }
      private void maybeForceBuilderInitialization() {
        if (com.google.protobuf.GeneratedMessageV3
                .alwaysUseFieldBuilders) {
        }
      }
      public Builder clear() {
        super.clear();
        seq_ = 0;

        if (stampBuilder_ == null) {
          stamp_ = null;
        } else {
          stamp_ = null;
          stampBuilder_ = null;
        }
        frameId_ = "";

        return this;
      }

      public com.google.protobuf.Descriptors.Descriptor
          getDescriptorForType() {
        return choreo.HeaderOuterClass.internal_static_choreo_Header_descriptor;
      }

      public choreo.HeaderOuterClass.Header getDefaultInstanceForType() {
        return choreo.HeaderOuterClass.Header.getDefaultInstance();
      }

      public choreo.HeaderOuterClass.Header build() {
        choreo.HeaderOuterClass.Header result = buildPartial();
        if (!result.isInitialized()) {
          throw newUninitializedMessageException(result);
        }
        return result;
      }

      public choreo.HeaderOuterClass.Header buildPartial() {
        choreo.HeaderOuterClass.Header result = new choreo.HeaderOuterClass.Header(this);
        result.seq_ = seq_;
        if (stampBuilder_ == null) {
          result.stamp_ = stamp_;
        } else {
          result.stamp_ = stampBuilder_.build();
        }
        result.frameId_ = frameId_;
        onBuilt();
        return result;
      }

      public Builder clone() {
        return (Builder) super.clone();
      }
      public Builder setField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          Object value) {
        return (Builder) super.setField(field, value);
      }
      public Builder clearField(
          com.google.protobuf.Descriptors.FieldDescriptor field) {
        return (Builder) super.clearField(field);
      }
      public Builder clearOneof(
          com.google.protobuf.Descriptors.OneofDescriptor oneof) {
        return (Builder) super.clearOneof(oneof);
      }
      public Builder setRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          int index, Object value) {
        return (Builder) super.setRepeatedField(field, index, value);
      }
      public Builder addRepeatedField(
          com.google.protobuf.Descriptors.FieldDescriptor field,
          Object value) {
        return (Builder) super.addRepeatedField(field, value);
      }
      public Builder mergeFrom(com.google.protobuf.Message other) {
        if (other instanceof choreo.HeaderOuterClass.Header) {
          return mergeFrom((choreo.HeaderOuterClass.Header)other);
        } else {
          super.mergeFrom(other);
          return this;
        }
      }

      public Builder mergeFrom(choreo.HeaderOuterClass.Header other) {
        if (other == choreo.HeaderOuterClass.Header.getDefaultInstance()) return this;
        if (other.getSeq() != 0) {
          setSeq(other.getSeq());
        }
        if (other.hasStamp()) {
          mergeStamp(other.getStamp());
        }
        if (!other.getFrameId().isEmpty()) {
          frameId_ = other.frameId_;
          onChanged();
        }
        onChanged();
        return this;
      }

      public final boolean isInitialized() {
        return true;
      }

      public Builder mergeFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws java.io.IOException {
        choreo.HeaderOuterClass.Header parsedMessage = null;
        try {
          parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
        } catch (com.google.protobuf.InvalidProtocolBufferException e) {
          parsedMessage = (choreo.HeaderOuterClass.Header) e.getUnfinishedMessage();
          throw e.unwrapIOException();
        } finally {
          if (parsedMessage != null) {
            mergeFrom(parsedMessage);
          }
        }
        return this;
      }

      private int seq_ ;
      /**
       * <code>uint32 seq = 1;</code>
       */
      public int getSeq() {
        return seq_;
      }
      /**
       * <code>uint32 seq = 1;</code>
       */
      public Builder setSeq(int value) {
        
        seq_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>uint32 seq = 1;</code>
       */
      public Builder clearSeq() {
        
        seq_ = 0;
        onChanged();
        return this;
      }

      private com.google.protobuf.Timestamp stamp_ = null;
      private com.google.protobuf.SingleFieldBuilderV3<
          com.google.protobuf.Timestamp, com.google.protobuf.Timestamp.Builder, com.google.protobuf.TimestampOrBuilder> stampBuilder_;
      /**
       * <code>.google.protobuf.Timestamp stamp = 2;</code>
       */
      public boolean hasStamp() {
        return stampBuilder_ != null || stamp_ != null;
      }
      /**
       * <code>.google.protobuf.Timestamp stamp = 2;</code>
       */
      public com.google.protobuf.Timestamp getStamp() {
        if (stampBuilder_ == null) {
          return stamp_ == null ? com.google.protobuf.Timestamp.getDefaultInstance() : stamp_;
        } else {
          return stampBuilder_.getMessage();
        }
      }
      /**
       * <code>.google.protobuf.Timestamp stamp = 2;</code>
       */
      public Builder setStamp(com.google.protobuf.Timestamp value) {
        if (stampBuilder_ == null) {
          if (value == null) {
            throw new NullPointerException();
          }
          stamp_ = value;
          onChanged();
        } else {
          stampBuilder_.setMessage(value);
        }

        return this;
      }
      /**
       * <code>.google.protobuf.Timestamp stamp = 2;</code>
       */
      public Builder setStamp(
          com.google.protobuf.Timestamp.Builder builderForValue) {
        if (stampBuilder_ == null) {
          stamp_ = builderForValue.build();
          onChanged();
        } else {
          stampBuilder_.setMessage(builderForValue.build());
        }

        return this;
      }
      /**
       * <code>.google.protobuf.Timestamp stamp = 2;</code>
       */
      public Builder mergeStamp(com.google.protobuf.Timestamp value) {
        if (stampBuilder_ == null) {
          if (stamp_ != null) {
            stamp_ =
              com.google.protobuf.Timestamp.newBuilder(stamp_).mergeFrom(value).buildPartial();
          } else {
            stamp_ = value;
          }
          onChanged();
        } else {
          stampBuilder_.mergeFrom(value);
        }

        return this;
      }
      /**
       * <code>.google.protobuf.Timestamp stamp = 2;</code>
       */
      public Builder clearStamp() {
        if (stampBuilder_ == null) {
          stamp_ = null;
          onChanged();
        } else {
          stamp_ = null;
          stampBuilder_ = null;
        }

        return this;
      }
      /**
       * <code>.google.protobuf.Timestamp stamp = 2;</code>
       */
      public com.google.protobuf.Timestamp.Builder getStampBuilder() {
        
        onChanged();
        return getStampFieldBuilder().getBuilder();
      }
      /**
       * <code>.google.protobuf.Timestamp stamp = 2;</code>
       */
      public com.google.protobuf.TimestampOrBuilder getStampOrBuilder() {
        if (stampBuilder_ != null) {
          return stampBuilder_.getMessageOrBuilder();
        } else {
          return stamp_ == null ?
              com.google.protobuf.Timestamp.getDefaultInstance() : stamp_;
        }
      }
      /**
       * <code>.google.protobuf.Timestamp stamp = 2;</code>
       */
      private com.google.protobuf.SingleFieldBuilderV3<
          com.google.protobuf.Timestamp, com.google.protobuf.Timestamp.Builder, com.google.protobuf.TimestampOrBuilder> 
          getStampFieldBuilder() {
        if (stampBuilder_ == null) {
          stampBuilder_ = new com.google.protobuf.SingleFieldBuilderV3<
              com.google.protobuf.Timestamp, com.google.protobuf.Timestamp.Builder, com.google.protobuf.TimestampOrBuilder>(
                  getStamp(),
                  getParentForChildren(),
                  isClean());
          stamp_ = null;
        }
        return stampBuilder_;
      }

      private java.lang.Object frameId_ = "";
      /**
       * <code>string frame_id = 3;</code>
       */
      public java.lang.String getFrameId() {
        java.lang.Object ref = frameId_;
        if (!(ref instanceof java.lang.String)) {
          com.google.protobuf.ByteString bs =
              (com.google.protobuf.ByteString) ref;
          java.lang.String s = bs.toStringUtf8();
          frameId_ = s;
          return s;
        } else {
          return (java.lang.String) ref;
        }
      }
      /**
       * <code>string frame_id = 3;</code>
       */
      public com.google.protobuf.ByteString
          getFrameIdBytes() {
        java.lang.Object ref = frameId_;
        if (ref instanceof String) {
          com.google.protobuf.ByteString b = 
              com.google.protobuf.ByteString.copyFromUtf8(
                  (java.lang.String) ref);
          frameId_ = b;
          return b;
        } else {
          return (com.google.protobuf.ByteString) ref;
        }
      }
      /**
       * <code>string frame_id = 3;</code>
       */
      public Builder setFrameId(
          java.lang.String value) {
        if (value == null) {
    throw new NullPointerException();
  }
  
        frameId_ = value;
        onChanged();
        return this;
      }
      /**
       * <code>string frame_id = 3;</code>
       */
      public Builder clearFrameId() {
        
        frameId_ = getDefaultInstance().getFrameId();
        onChanged();
        return this;
      }
      /**
       * <code>string frame_id = 3;</code>
       */
      public Builder setFrameIdBytes(
          com.google.protobuf.ByteString value) {
        if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
        
        frameId_ = value;
        onChanged();
        return this;
      }
      public final Builder setUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return this;
      }

      public final Builder mergeUnknownFields(
          final com.google.protobuf.UnknownFieldSet unknownFields) {
        return this;
      }


      // @@protoc_insertion_point(builder_scope:choreo.Header)
    }

    // @@protoc_insertion_point(class_scope:choreo.Header)
    private static final choreo.HeaderOuterClass.Header DEFAULT_INSTANCE;
    static {
      DEFAULT_INSTANCE = new choreo.HeaderOuterClass.Header();
    }

    public static choreo.HeaderOuterClass.Header getDefaultInstance() {
      return DEFAULT_INSTANCE;
    }

    private static final com.google.protobuf.Parser<Header>
        PARSER = new com.google.protobuf.AbstractParser<Header>() {
      public Header parsePartialFrom(
          com.google.protobuf.CodedInputStream input,
          com.google.protobuf.ExtensionRegistryLite extensionRegistry)
          throws com.google.protobuf.InvalidProtocolBufferException {
          return new Header(input, extensionRegistry);
      }
    };

    public static com.google.protobuf.Parser<Header> parser() {
      return PARSER;
    }

    @java.lang.Override
    public com.google.protobuf.Parser<Header> getParserForType() {
      return PARSER;
    }

    public choreo.HeaderOuterClass.Header getDefaultInstanceForType() {
      return DEFAULT_INSTANCE;
    }

  }

  private static final com.google.protobuf.Descriptors.Descriptor
    internal_static_choreo_Header_descriptor;
  private static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_choreo_Header_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\026primitive/header.proto\022\006choreo\032\037google" +
      "/protobuf/timestamp.proto\"R\n\006Header\022\013\n\003s" +
      "eq\030\001 \001(\r\022)\n\005stamp\030\002 \001(\0132\032.google.protobu" +
      "f.Timestamp\022\020\n\010frame_id\030\003 \001(\tB1Z/github." +
      "com/RobotStudio/choreo-msg/msg/primitive" +
      "b\006proto3"
    };
    com.google.protobuf.Descriptors.FileDescriptor.InternalDescriptorAssigner assigner =
        new com.google.protobuf.Descriptors.FileDescriptor.    InternalDescriptorAssigner() {
          public com.google.protobuf.ExtensionRegistry assignDescriptors(
              com.google.protobuf.Descriptors.FileDescriptor root) {
            descriptor = root;
            return null;
          }
        };
    com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
          com.google.protobuf.TimestampProto.getDescriptor(),
        }, assigner);
    internal_static_choreo_Header_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_choreo_Header_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_choreo_Header_descriptor,
        new java.lang.String[] { "Seq", "Stamp", "FrameId", });
    com.google.protobuf.TimestampProto.getDescriptor();
  }

  // @@protoc_insertion_point(outer_class_scope)
}
