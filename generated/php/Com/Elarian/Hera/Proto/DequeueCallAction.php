<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: messaging_model.proto

namespace Com\Elarian\Hera\Proto;

use Google\Protobuf\Internal\GPBType;
use Google\Protobuf\Internal\RepeatedField;
use Google\Protobuf\Internal\GPBUtil;

/**
 * Generated from protobuf message <code>com.elarian.hera.proto.DequeueCallAction</code>
 */
class DequeueCallAction extends \Google\Protobuf\Internal\Message
{
    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.MessagingChannelNumber channel_number = 1;</code>
     */
    protected $channel_number = null;
    /**
     * Generated from protobuf field <code>bool record = 2;</code>
     */
    protected $record = false;
    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue queue_name = 3;</code>
     */
    protected $queue_name = null;

    /**
     * Constructor.
     *
     * @param array $data {
     *     Optional. Data for populating the Message object.
     *
     *     @type \Com\Elarian\Hera\Proto\MessagingChannelNumber $channel_number
     *     @type bool $record
     *     @type \Google\Protobuf\StringValue $queue_name
     * }
     */
    public function __construct($data = NULL) {
        \GPBMetadata\MessagingModel::initOnce();
        parent::__construct($data);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.MessagingChannelNumber channel_number = 1;</code>
     * @return \Com\Elarian\Hera\Proto\MessagingChannelNumber
     */
    public function getChannelNumber()
    {
        return isset($this->channel_number) ? $this->channel_number : null;
    }

    public function hasChannelNumber()
    {
        return isset($this->channel_number);
    }

    public function clearChannelNumber()
    {
        unset($this->channel_number);
    }

    /**
     * Generated from protobuf field <code>.com.elarian.hera.proto.MessagingChannelNumber channel_number = 1;</code>
     * @param \Com\Elarian\Hera\Proto\MessagingChannelNumber $var
     * @return $this
     */
    public function setChannelNumber($var)
    {
        GPBUtil::checkMessage($var, \Com\Elarian\Hera\Proto\MessagingChannelNumber::class);
        $this->channel_number = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>bool record = 2;</code>
     * @return bool
     */
    public function getRecord()
    {
        return $this->record;
    }

    /**
     * Generated from protobuf field <code>bool record = 2;</code>
     * @param bool $var
     * @return $this
     */
    public function setRecord($var)
    {
        GPBUtil::checkBool($var);
        $this->record = $var;

        return $this;
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue queue_name = 3;</code>
     * @return \Google\Protobuf\StringValue
     */
    public function getQueueName()
    {
        return isset($this->queue_name) ? $this->queue_name : null;
    }

    public function hasQueueName()
    {
        return isset($this->queue_name);
    }

    public function clearQueueName()
    {
        unset($this->queue_name);
    }

    /**
     * Returns the unboxed value from <code>getQueueName()</code>

     * Generated from protobuf field <code>.google.protobuf.StringValue queue_name = 3;</code>
     * @return string|null
     */
    public function getQueueNameUnwrapped()
    {
        return $this->readWrapperValue("queue_name");
    }

    /**
     * Generated from protobuf field <code>.google.protobuf.StringValue queue_name = 3;</code>
     * @param \Google\Protobuf\StringValue $var
     * @return $this
     */
    public function setQueueName($var)
    {
        GPBUtil::checkMessage($var, \Google\Protobuf\StringValue::class);
        $this->queue_name = $var;

        return $this;
    }

    /**
     * Sets the field by wrapping a primitive type in a Google\Protobuf\StringValue object.

     * Generated from protobuf field <code>.google.protobuf.StringValue queue_name = 3;</code>
     * @param string|null $var
     * @return $this
     */
    public function setQueueNameUnwrapped($var)
    {
        $this->writeWrapperValue("queue_name", $var);
        return $this;}

}
